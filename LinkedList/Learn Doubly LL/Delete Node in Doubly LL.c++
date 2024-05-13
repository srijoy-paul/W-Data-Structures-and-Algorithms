#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next = nullptr;
    Node *back = nullptr;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
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

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    free(temp);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    Node *prev = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    temp->back = NULL;
    free(temp);
    return head;
}

int main()
{
    vector<int> arr = {1, 5, 4, 8, 9, 6};
    Node *dll = constructDLL(arr);
    // Node *DeleteDLL = deleteHead(dll);
    Node *DeleteDLL = deleteTail(dll);
    printDLL(DeleteDLL);
}