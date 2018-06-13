#include<bits/stdc++.h>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
};

int findMax(vector <int> &A, int low, int high)
{
	int index = low;
	for(int i = low + 1; i <= high; i++)
	{
		if(A[index] < A[i])
			index = i;
	}
	return index;
}

struct TreeNode* tree(vector <int> &A, int low, int high)
{
	if(low > high)
		return NULL;
	int maxNode = findMax(A, low, high);
	struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	root->val = A[maxNode];
	root->left = tree(A, low, maxNode - 1);
	root->right = tree(A, maxNode + 1, high);
	return root;
}

int main()
{
	vector <int> A;
	A.push_back(5);
	A.push_back(10);
	A.push_back(40);
	A.push_back(30);
	A.push_back(28);
	
	if(A.size() == 0)
		return NULL;
	struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	root = tree(A, 0, A.size() - 1);
}
