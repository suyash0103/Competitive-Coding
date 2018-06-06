/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* root, int k, int &small, int &curr)
{
    if(root == NULL)
        return;
    inorder(root->left, k, small, curr);
    curr++;
    if(curr == k)
    {
        small = root->val;
        return;
    }
    inorder(root->right, k, small, curr);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    int ans;
    int curr = 0;
    inorder(A, B, ans, curr);
    return ans;
}
