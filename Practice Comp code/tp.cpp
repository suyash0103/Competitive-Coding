#include<bits/stdc++.h>

using namespace std;

int main()
{
	pair <int, int> p[100];
	map <int, int> mp[100];
	for(int i = 0; i < 5; i++)
	{
		int u, v;
		cin >> u >> v;
		p[i].make_pair(u + v, i + 1);
		mp[i].make_pair(u + v, i + 1);
	}
	for(int i = 0; i < 5; i++)
		cout << p[i].second << " " << mp[i].second << endl;
}
