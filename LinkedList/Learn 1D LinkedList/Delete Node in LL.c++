#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next = nullptr;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
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

Node *deleteFirst(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    if (head->next == NULL)
    {
        head == NULL;
        free(temp);
        return head;
    }
    // Node* temp=head;
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
    return head;
}

int main()
{
    vector<int> arr = {1, 5, 4, 8, 9, 6};
    Node *ll = constructLL(arr);
    // printLL(ll);
    // Node* updateLL=deleteFirst(ll);
    Node *updateLL = deleteTail(ll);
    printLL(updateLL);
}