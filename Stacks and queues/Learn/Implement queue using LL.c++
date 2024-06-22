#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

class myQueue
{
    Node *front;
    Node *rear;
    int queueSize;

public:
    myQueue()
    {
        front = NULL;
        rear = NULL;
        queueSize = 0;
    }

    void push(int x)
    {
        Node *temp = new Node();
        temp->val = x;
        if (front == NULL)
        {
            front = temp;
            rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void pop()
    {
        if (front == rear)
            return;
        Node *temp = front;
        front = front->next;
        delete (temp);
    }

    int top()
    {
        if (front == NULL)
            return -1;
        return front->val;
    }
};

int main()
{
    myQueue q1;
    cout << q1.top() << endl;
    q1.push(4);
    cout << q1.top();
}