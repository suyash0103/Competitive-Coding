#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	vector <ll> v(n);
	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for(int j = 0; j < q; j++)
	{
		int u;
		scanf("%d", &u);
		if(u == 1)
		{
			int k;
			ll x;
			scanf("%d%lld", &k, &x);
			v.insert(v.begin() + k - 1, x);
		}
		else if(u == 2)
		{
			int x;
			scanf("%d", &x);
			v.erase(v.begin() + x - 1);
		}
		else
		{
			int k;
			scanf("%d", &k);
			printf("%lld\n", v[k - 1]);
		}
	}
}
