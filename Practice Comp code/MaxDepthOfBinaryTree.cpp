/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int depth(struct TreeNode* root)
{
	if(root == NULL)
		return 0;
	int l = depth(root->left);
	int r = depth(root->right);
	if(l > r)
		return l + 1;
	return r + 1;
}

int Solution::maxDepth(TreeNode* A) {
    if(A == NULL)
        return 0;
    return depth(A);
}
