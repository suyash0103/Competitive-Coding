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

int main()
{
	struct TreeNode* root = newNode(1);
	root->left = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	root->right = newNode(5);
	root->right->right = newNode(6);
	
	struct TreeNode* root2 = newNode(1);
	root2->left = newNode(2);
	root2->left->left = newNode(3);
	root2->left->right = newNode(4);
	root2->right = newNode(5);
	root2->right->right = newNode(6);
	
	queue <TreeNode* > q1;
	queue <TreeNode* > q2;
	q1.push(root);
	q2.push(root2);
	
	while(!q1.empty() && !q2.empty())
	{
		struct TreeNode* a = q1.front();
		q1.pop();
		struct TreeNode* b = q2.front();
		q2.pop();
		if(a->val != b->val)
			return 0;
		if(a->val != b->val)
			return 0;
		if(a->left != NULL)
		    q1.push(a->left);
		if(a->right != NULL)
		    q1.push(a->right);
		if(b->right != NULL)
		    q2.push(b->right);
		if(b->left != NULL)
		    q2.push(b->left);
	}
	if(q1.size() > 0)
		return 0;
	if(q2.size() > 0)
		return 0;
	return 1;
}
