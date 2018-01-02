#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		vector <pair<int, int> > v(26);
		for(int i = 0; i < 26; i++)
		{
			v[i].first = 0;
			v[i].second = i;
		}
		for(int i = 0; i < s.length(); i++)
		{
			v[s[i] - 'a'].first++;
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < 26; i++)
		{
			for(int j = 0; j < v[i].first; j++)
			{
				char c = v[i].second + 'a';
				cout << c;
			}
		}
		cout << endl;
	}
}
