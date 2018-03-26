#include<bits/stdc++.h>

using namespace std;

pair <string, char> p;
vector <int> v;

class huff
{
	public:
		huff* left;
		huff* right;
		int freq;
		char c;
		int empty;
		int visited;
};

struct MoreThanByFreq
{
	bool operator()(const huff& lhs, const huff& rhs) const
	{
    	return lhs.freq > rhs.freq;
	}
};

priority_queue<huff, vector<huff>, MoreThanByFreq> q;

void printnode(huff* node, vector<int> &t)
{
	cout << node -> c;
	for(int i = 0; i < t.size(); i++)
		cout << t[i] << " ";
	cout << endl; 
}

void order(huff* node, int index)
{
	if(node == NULL)
		return;

	if(index == 0)
		v.push_back(0);
	else if(index == 1)
		v.push_back(1);
		
	if(node -> left == NULL && node -> right == NULL)
	{
		//printnode(node, v);
		cout << "Leaf " << index << endl;
		return;
	}
	else
	{
		if(node -> left != NULL && node -> left -> c != '*')
			order(node -> left, 0);
		else if(node -> left != NULL && node -> left -> c == '*')
			order(node -> left, 2);

		if(node -> right != NULL && node -> right -> c != '*')	
			order(node -> right, 1);
		else if(node -> right != NULL && node -> right -> c == '*')
			order(node -> right, 2);
		
		return;
	}
}

int main()
{
	string s;
	cout << "Enter string:";
	cin >> s;
	int freq[26];
	
	for(int i = 0; i < 26; i++)
		freq[i] = 0;
	
	for(int i = 0; i < s.length(); i++)
	{
		freq[s[i] - 'a']++;	
	}
	
//	for(int i = 0; i < 26; i++)
//		cout << freq[i] << endl;
	
	int x = 26;
	priority_queue<huff*, vector<huff>, MoreThanByFreq> q1;
	int index = 0;
	while(x--)
	{
		if(freq[index] != 0)
		{
			huff h;
			h.c = char(index + 97);
			h.left = NULL;
			h.right = NULL;
			h.freq = freq[index];
			h.empty = 0;
			h.visited = 0;
			q.push(h);
		}
		index++;
	}
	
	// while(!q.empty())
	// {
	// 	huff h = q.top();
	// 	q.pop();
	// 	cout << h.c << " " << h.freq << endl;
	// }

	while(q.size() > 1)
	{
		huff h1, h2;
		h1 = q.top();
		q.pop();
		h2 = q.top();
		q.pop();
		// cout << h1.freq << " " << h2.freq << endl;
		//huff* h = new huff();
		huff h;
		h.freq = h1.freq + h2.freq;
		h.left = &h1;
		h.right = &h2;
		h.visited = 0;
		h.empty = 1;
		h.c = '*';

		cout << h.left -> freq << " " << h.right -> freq << endl;
		q.push(h);
	}

	huff root;
	root = q.top();
	
	order(&root, 2);

	return 0;
}