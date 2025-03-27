/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> preorder, inorder, postorder;
    stack<pair<TreeNode *, int>> st;
    st.push({root, 1});

    vector<vector<int>> ans;

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();
        TreeNode *temp = it.first;
        if (it.second == 1)
        {
            // preorder
            preorder.emplace_back(temp->data);
            st.push({temp, it.second + 1});
            if (temp->left)
                st.push({temp->left, 1});
        }
        else if (it.second == 2)
        {
            // inorder
            inorder.emplace_back(temp->data);
            st.push({temp, it.second + 1});
            if (temp->right)
                st.push({temp->right, 1});
        }
        else if (it.second == 3)
        {
            // postorder
            postorder.emplace_back(temp->data);
        }
    }
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);

    return ans;
}