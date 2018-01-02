#include<iostream>

using namespace std;

typedef long long int ll;

#define MOD 1000000007;

ll a[100001];
ll ans[100001];

ll func(ll a[], int x, int n)
{
	ll sum = 0;
	for(int i = x - 1; i < n; i += x)
	{
		sum = sum + a[i] * a[i];
		sum = sum % MOD;
	}
	return sum;
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, q, pos = 0;
		scanf("%d%d", &n, &q);
		for(int j = 0; j < n; j++)
			scanf("%lld", &a[j]);
		for(int j = 0; j < q; j++)
		{
			int type;
			scanf("%d", &type);
			if(type == 2)
			{
				int u; 
				ll v;
				scanf("%d%lld", &u, &v);
				a[u - 1] = v;
			}
			else if(type == 1)
			{
				int x;
				scanf("%d", &x);
				ll sum = func(a, x, n);
				sum = sum % MOD;
				ans[pos] = sum;
				printf("%lld\n", ans[pos]);
				pos++;
			}
		}
		pos = 0;
	}
}
