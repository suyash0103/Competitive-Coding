#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int k;
	cin >> s >> k;
	vector <int> vec;
	vec.push_back(-1);
	for(int i = 0; i < s.length(); i++)
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
			vec.push_back(i);
	vec.push_back(s.length());
//	for(int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
	int maxLen = 0;
	int pos1 = 0, pos2 = k;
	if(pos2 >= vec.size())
	{
		cout << -1;
	}
	else
	{
		while(pos2 < vec.size())
		{
			maxLen = max(maxLen, vec[pos2] - vec[pos1]);
			pos1++;
			pos2++;
		}
		cout << maxLen;
	}
}
