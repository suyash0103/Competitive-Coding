#include<bits/stdc++.h>

using namespace std;

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
	sort(freq, freq + 26, greater<int>());
	priority_queue <int> q;
	int index = 0;
	while(freq[index] != 0)
	{
		q.push(freq[index]);
		index++;	
	}
	while(!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}
}
