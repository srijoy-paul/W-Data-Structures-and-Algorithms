#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

class myStack
{
    Node *head;
    int stackSize = 0;

public:
    myStack()
    {
        head = NULL;
        stackSize = 0;
    }
    void push(int x)
    {
        Node *temp = new Node();
        temp->val = x;
        temp->next = head;
        head = temp;
    }

    void pop()
    {
        if (head == NULL)
            return;

        Node *temp = head;
        head = temp->next;
        delete (temp);
    }

    int top()
    {
        if (head == NULL)
            return -1;
        return head->val;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack s1;
    cout << s1.isEmpty() << endl;
    cout << s1.top() << endl;
    s1.push(4);
    s1.push(3);
    s1.push(2);
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top();
}