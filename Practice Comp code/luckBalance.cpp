#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int sum = 0;
	map <int, int> mp;
	int num = 0;
	for(int i = 0; i < n; i++)
	{
		int u, v;
		cin >> u >> v;
		if(v == 0)
		{
			sum = sum + u;
		}
		else
		{
			mp.insert(make_pair(u, v));
			num++;
		}
	}
	map <int, int> :: iterator it;
	int x = 1;
	for(it = mp.begin(); it != mp.end(); it++)
	{
		if(x <= num - k)
		{
			x++;
			sum = sum - it -> first;
			continue;
		}
		sum = sum + it -> first;
		//cout << it -> first << endl;
	}
	cout << sum;
}
