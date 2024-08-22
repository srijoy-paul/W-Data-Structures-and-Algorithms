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
    cout << "Enter left child value for " << x << " :";
    temp->left = BinaryTree();
    cout << "Enter right child value for " << x << " :";
    temp->right = BinaryTree();
    return temp;
}

void preorder(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    preorder(head->left);
    preorder(head->right);
}

void inorder(Node *head)
{
    if (head == NULL)
        return;
    inorder(head->left);
    cout << head->data << " ";
    inorder(head->right);
}

void postorder(Node *head)
{
    if (head == NULL)
        return;
    postorder(head->left);
    postorder(head->right);
    cout << head->data << " ";
}

int main()
{
    cout << "Enter the root Node: ";
    Node *root;
    root = BinaryTree();

    cout << "Pre-Order traversal: ";
    preorder(root);
    cout << endl;
    cout << "In-Order traversal: ";
    inorder(root);
    cout << endl;
    cout << "Post-Order traversal: ";
    postorder(root);
    cout << endl;
}