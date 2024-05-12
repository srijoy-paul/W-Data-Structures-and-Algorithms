#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
public:
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *constructLL(vector<int> &arr)
{
    // code here
    Node *head = new Node(arr[0]);
    Node *temp;
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        temp = new Node(arr[i]);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
}

Node *insertAtHead(Node *head, int ele)
{
    Node *temp = new Node(ele);
    temp->next = head->next;
    return temp;
}

Node *insertAtTail(Node *head, int ele)
{
    if (head == NULL)
    {
        return new Node(ele);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(ele);
    temp->next = newNode;
    return head;
}

int main()
{
    vector<int> arr = {1, 5, 4, 8, 9, 6};
    Node *ll = constructLL(arr);
    // Node *updatedLLafterInsertAtHead = insertAtHead(ll, 7);
    printLL(ll);
    Node *updatedLLafterInsertAtTail = insertAtTail(ll, 7);
    printLL(updatedLLafterInsertAtTail);
}