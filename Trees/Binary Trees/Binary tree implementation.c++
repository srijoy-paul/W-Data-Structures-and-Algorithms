#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    queue<Node *> q;
    int rootVal, first, second;
    cout << "Enter the root node :";
    cin >> rootVal;
    Node *rootNode = new Node(rootVal);
    q.push(rootNode);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter first node value for: " << temp->data << " ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << "Enter second node value for: " << temp->data << " ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}