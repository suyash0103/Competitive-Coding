/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void invert(TreeNode* root)
{
    if (!root || (!root->left && !root->right))
        return;
    invert(root->left);
    invert(root->right);
    TreeNode* tempLNode = root->left;
    root->left = root->right;
    root->right = tempLNode;
}

TreeNode* Solution::invertTree(TreeNode* root) {
    invert(root);
    return root;
}
