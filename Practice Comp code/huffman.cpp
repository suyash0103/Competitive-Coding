#include<bits/stdc++.h>

using namespace std;

class huff
{
	public:
		huff* left;
		huff* right;
		int freq;
		char c;
		int empty;
};

struct MoreThanByFreq
{
	bool operator()(const huff& lhs, const huff& rhs) const
	{
    	return lhs.freq > rhs.freq;
	}
};

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
	priority_queue<huff, vector<huff>, MoreThanByFreq> q;
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
			q.push(h);
		}
		index++;
	}
	
//	while(!q.empty())
//	{
//		huff h = q.top();
//		q.pop();
//		cout << h.c << " " << h.freq << endl;
//	}
	
	huff final;
	while(!q.empty())
	{
		if(q.size() == 1)
		{
			final = q.top();
			q.pop();
			break;
		}
		huff h1 = q.top();
		q.pop();
		huff h2 = q.top();
		q.pop();
		huff h;
		h.left = &h1;
		h.right = &h2;
		h.empty = 1;
		h.freq = h1.freq + h2.freq;
		q.push(h);
	}
	
}