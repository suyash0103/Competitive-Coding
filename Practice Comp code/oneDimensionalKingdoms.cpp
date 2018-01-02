#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int first = 1000000;
		cin >> n;
		vector <pair<int, int> > vec;
		for(int i = 0; i < n; i++)
		{
			int u, v;
			cin >> u >> v;
			vec.push_back(make_pair(v, u));
			if(u < first)
				first = u;
		}
		sort(vec.begin(), vec.end());
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			if(vec[i].second >= first)
			{
				ans++;
				first = vec[i].first;
			}
		}
		cout << ans << endl;
	}
}
