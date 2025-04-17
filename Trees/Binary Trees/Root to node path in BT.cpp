#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// creation of Binary tree
TreeNode *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    TreeNode *temp = new TreeNode(x);
    cout << "Enter left child value for: " << x;
    temp->left = BinaryTree();
    cout << "Enter right child value for: " << x;
    temp->right = BinaryTree();
    return temp;
}
void findNodePresentOrNot(TreeNode *node, int nodeVal, vector<int> &path)
{
    if (!node)
        return;
    // path.emplace_back(node->data);
    stack<TreeNode *> st;
    st.push(node);
    while (true)
    {
        auto node = st.top();
        if (node->data == nodeVal)
        {
            break;
        }
        if (node->right)
            st.push(node->right);
        if (node->left)
            st.push(node->left);
        if (!node->left && !node->right)
        {
            st.pop();
        }
    }
    while (!st.empty())
    {
        path.emplace_back(st.top()->data);
        st.pop();
    }
    reverse(path.begin(), path.end());
}

int main()
{
    // creation of binary tree
    cout << "Enter the root Node: ";
    TreeNode *root;
    // root = BinaryTree();
    queue<TreeNode *> q;
    int rootValue;
    cout << "Enter root value: ";
    cin >> rootValue;
    TreeNode *rootNode = new TreeNode(rootValue);
    q.push(rootNode);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();

        int first, second;

        cout << "Enter first node value for: " << temp->data << " ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new TreeNode(first);
            q.push(temp->left);
        }

        cout << "Enter second node value for: " << temp->data << " ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new TreeNode(second);
            q.push(temp->right);
        }
    }

    //[1 2 3 4 5 -1 -1 -1 -1 6 7]

    int nodeVal = 7;
    // traverse the tree and find out the node, and also store the path as well
    vector<int> path;
    findNodePresentOrNot(rootNode, nodeVal, path);

    for (auto it : path)
    {
        cout << it << " ";
    }
}