/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isSame(struct TreeNode* A, struct TreeNode* B, int &c)
{
    if(A == NULL && B == NULL)
        return 1;
    else if((A == NULL && B != NULL) || (A != NULL && B == NULL))
    {
        c = 1;
        return 0;
    }
    else if(A->val == B->val)
    {
        int l = isSame(A->left, B->left, c);
        int r = isSame(A->right, B->right, c);
        if(l == 1 && r == 1)
            return 1;
        else
        {
            c = 1;
            return 0;
        }
    }
    else
    {
        c = 1;
        return 0;
    }
}

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    int c = 0;
    isSame(A, B, c);
    if(c == 1)
        return 0;
    return 1;
}
