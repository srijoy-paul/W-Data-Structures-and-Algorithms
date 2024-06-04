//{ Driver Code Starts
// Initial template for C++
// T.C: O(3N) - 2 Reverse operation + one traversal to add the carry
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/
Node *reverseList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = reverseList(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

class Solution
{
public:
    Node *addOne(Node *head)
    {
        // Your Code here
        // return head of list after adding one
        int carry = 1;
        head = reverseList(head);
        Node *temp = head;
        while (temp != NULL)
        {
            temp->data = temp->data + carry;
            if (temp->data < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                temp->data = 0;
                carry = 1;
            }
            temp = temp->next;
        }
        head = reverseList(head);
        if (carry == 1)
        {
            Node *newHead = new Node(1);
            newHead->next = head;
            return newHead;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Node *head = new Node(s[0] - '0');
        Node *tail = head;
        for (int i = 1; i < s.size(); i++)
        {
            tail->next = new Node(s[i] - '0');
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends