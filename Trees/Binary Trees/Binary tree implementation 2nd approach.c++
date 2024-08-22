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

Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    Node *temp = new Node(x);
    cout << "Enter left child value for: " << x;
    temp->left = BinaryTree();
    cout << "Enter right child value for: " << x;
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    cout << "Enter the root Node: ";
    Node *root;
    root = BinaryTree();
}