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

void reverseFirstApproach(Node *head)
{
    Node *temp = head;
    vector<int> tempStack;
    while (temp != NULL)
    {
        tempStack.emplace_back(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL && !tempStack.empty())
    {
        temp->data = tempStack.back();
        tempStack.pop_back();
        temp = temp->next;
    }
    return;
}

Node *reverseSecondApproach(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        temp = temp->prev;
    }
    return prev->prev;
}
int main()
{
    vector<int> arr = {1, 5, 4, 8, 9, 6};
    Node *dll = constructDLL(arr);
    // reverseFirstApproach(dll);
    // printDLL(dll);
    Node *updatedHead = reverseSecondApproach(dll);
    printDLL(updatedHead);
}