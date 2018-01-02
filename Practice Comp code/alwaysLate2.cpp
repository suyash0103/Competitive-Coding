#include <iostream>

using namespace std;

typedef long long int ll;

#define MOD 1000000007;

ll a[100001];
ll ans[100001];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, q, pos = 0, sq = 0;
		scanf("%d%d", &n, &q);
		for(int j = 0; j < n; j++)
		{
			scanf("%lld", &a[j]);
			sq = sq + a[j] * a[j];
			ans[j] = sq;
		}
		for(int test = 0; test < q; test++)
		{
			int type;
			scanf("%d", &type);
			if(type == 2)
			{
				int u; 
				ll v;
				scanf("%d%lld", &u, &v);
				if(v < a[u - 1])
				{
					int to_put = a[u - 1] * a[u - 1] - v * v;
					for(int r = u - 1; r < n; r++)
						ans[r] = ans[r] - to_put;
					a[u - 1] = v;
				}
				else
				{
					int to_put = v * v - a[u - 1] * a[u - 1];
					for(int r = u - 1; r < n; r++)
						ans[r] = ans[r] + to_put;
					a[u - 1] = v;
				}
			}
			else
			{
				int x;
				scanf("%d", &x);
				if(x == 1)
				{
					ll answer = ans[n - 1] % MOD;
					printf("%lld\n", answer);
				}
				else if(x == n)
				{
					ll answer = a[n - 1] * a[n - 1];
					answer = answer % MOD;
					printf("%lld\n", answer);
				}
				else
				{
					
					int limit = n - n % x;
					ll sum = 0;
					int ignore = x - 1;
					for(int z = 0; z < limit; z++)
					{
						if(z == ignore)
						{
							sum = sum + ans[z];
							ignore = ignore + x;
						}
						else
							sum = sum - ans[z];
					}
					sum = sum % MOD;
					printf("%lld\n", sum);	
				}
			}	
		}
	}
}
