#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void changeTree(BinaryTreeNode<int> *root)
{
    // Write your code here.
    if (root == NULL)
        return;

    // calculating the child sum of the current node.
    int childSum = 0;
    if (root->left)
        childSum += root->left->data;
    if (root->right)
        childSum += root->right->data;

    // comparing the sum, with the root val. Change will happen, whichever parent or childs dominate, will change the either.
    if (childSum > root->data)
        root->data = childSum;
    else
    {
        if (root->left)
            root->left->data = root->data;
        if (root->right)
            root->right->data = root->data;
    }

    // after calculating and updating, going down
    changeTree(root->left);
    changeTree(root->right);

    int total = 0;
    if (root->left)
        total += root->left->data;
    if (root->right)
        total += root->right->data;
    if (root->left or root->right)
        root->data = total;
}