#include<bits/stdc++.h>

using namespace std;

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};

struct TreeNode* newNode(int n)
{
	struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	node->val = n;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int check(struct TreeNode* root, int &c)
{
	if(root == NULL)
		return 0;
	int l = check(root->left, c);
	int r = check(root->right, c);
	if(abs(l - r) > 1)
	{
		c = 1;
		return 0;
	}
	else
	{
		return 1 + max(l, r);
	}
}

int main()
{
	struct TreeNode* root = newNode(1);
	root->left = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
//	root->right = newNode(5);
//	root->right->right = newNode(6);
	
	int c = 0;
	check(root, c);
	if(c == 0)
		cout << "BALANCED";
	else
		cout << "UNBALANCED";	
}
