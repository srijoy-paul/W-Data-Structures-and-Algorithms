#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void preOrder(TreeNode *root, vector<int> &ans)
{
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        auto node = st.top();
        st.pop();

        ans.emplace_back(node->val);
        if (node->right)
        {
            st.push(node->right);
        }
        if (node->left)
        {
            st.push(node->left);
        }
    }
}

void inOrder(TreeNode *root, vector<int> &ans)
{
    stack<TreeNode *> st;
    while (true)
    {
        if (root)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            if (st.empty())
                return;
            auto node = st.top();
            st.pop();
            ans.emplace_back(node->val);
            root = node->right;
        }
    }
}

void postOrder(TreeNode *root, vector<int> &ans) // using two stack
{
    stack<TreeNode *> st1;
    st1.push(root);
    stack<TreeNode *> st2;
    while (!st1.empty())
    {
        auto node = st1.top();
        st1.pop();
        st2.push(node);
        if (node->left)
        {
            st1.push(node->left);
        }
        if (node->right)
        {
            st1.push(node->right);
        }
    }

    while (!st2.empty())
    {
        ans.emplace_back(st2.top());
        st2.pop();
    }
}

void postOrder2(TreeNode *root, vector<int> &ans) // using one stack
{
    TreeNode *curr = root;
    stack<TreeNode *> st;
    while (curr || !st.empty())
    {
        if (curr)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            auto node = st.top()->right; // last node ->right
            if (node == NULL)
            {
                node = st.top();
                st.pop();
                ans.emplace_back(node->val);
                while (node == st.top()->right)
                {
                    node = st.top();
                    st.pop();
                    ans.emplace_back(node->val);
                }
            }
            else
            {
                curr = node;
            }
        }
    }
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> ans;
    // postOrder(root, ans);
    postOrder2(root, ans);
    for (auto nums : ans)
    {
        cout << nums << " ";
    }
    return 0;
}