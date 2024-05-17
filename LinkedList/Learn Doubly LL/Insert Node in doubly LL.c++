#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next = nullptr;
    Node *prev = nullptr;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        prev = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *constructDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node *head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *insertBeforeHead(Node *head, int val)
{
    Node *newNode = new Node(val, head, nullptr);
    head->prev = newNode;
    return newNode;
}

Node *insertBeforeTail(Node *head, int val)
{
    Node *temp = head;
    if (temp->next == NULL && temp->prev == NULL)
    {
        return insertBeforeHead(head, val);
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val, temp->next, temp);
    temp->next = newNode;
    temp->next->prev = newNode;

    return head;
}

Node *insertBeforeKthElement(Node *head, int k, int val)
{
    if (k == 1)
        return insertBeforeHead(head, val);
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->prev;
    Node *newNode = new Node(val, temp, prev);

    prev->next = newNode;
    temp->prev = newNode;

    return head;
}
int main()
{
    vector<int> arr = {1, 5, 4, 8, 9, 6};
    Node *dll = constructDLL(arr);
    // Node *afterInsertAtHead = insertBeforeHead(dll, 20);
    // Node *InsertAtTail = insertBeforeKthElement(dll,2, 20);
    Node *InsertKthPosition = insertBeforeKthElement(dll, 2, 20);
    printDLL(InsertKthPosition);
}