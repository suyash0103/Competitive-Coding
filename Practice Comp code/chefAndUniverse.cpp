#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int dp[105][105][105];

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--)
	{
		int x, y, z, a, b, c;
		scanf("%d%d%d%d%d%d", &x, &y, &z, &a, &b, &c);
		dp[x][y][z] = 0;
		int val = a;
		for(int i = x - 1; i >= 0; i--)
		{
			dp[i][y][z] = val;
			val += a;
		}
		val = a;
		for(int i = y - 1; i >= 0; i--)
		{
			dp[x][i][z] = val;
			val += a;
		}
		val = a;
		for(int i = z - 1; i >= 0; i--)
		{
			dp[x][y][i] = val;
			val += a;
		}
		for(int i = x - 1; i >= 0; i--)
		{
			for(int j = y - 1; j >= 0; j--)
			{
				int l = min(dp[i + 1][j][z] + a, dp[i][j + 1][z] + a);
				dp[i][j][z] = min(l, dp[i + 1][j + 1][z] + b);
			}
		}
		for(int k = z - 1; k >= 0; k--)
		{
			for(int j = y; j >= 0; j--)
			{
				for(int i = x; i >= 0; i--)
				{
					if(j == y & i == x)
					{
						continue;
					}
					else if(j == y && i != x)
					{
						int l = min(dp[i + 1][j][k] + a, dp[i][j][k + 1] + a);
						dp[i][j][k] = min(l, dp[i + 1][j][k + 1] + b);
					}
					else if(j != y && i == x)
					{
						int l = min(dp[i][j + 1][k] + a, dp[i][j][k + 1] + a);
						dp[i][j][k] = min(l, dp[i][j + 1][k + 1] + b);
					}
					else
					{
						int l = min(dp[i][j + 1][k] + a, dp[i + 1][j][k] + a);
						int m = min(dp[i][j][k + 1] + a, dp[i][j + 1][k + 1] + b);
						int n = min(dp[i + 1][j + 1][k] + b, dp[i + 1][j][k + 1] + b);
						//dp[i][j][k] = min(a, b, dp[i + 1][j + 1][k + 1] + c);
						int o = dp[i + 1][j + 1][k + 1] + c;
						int p = min(l, m);
						int q = min(n, o);
						int r = min(p, q);
						dp[i][j][k] = r;
					}
				}
			}
		}
		printf("%d\n", dp[0][0][0]);
		for(int k = z; k >= 0; k--)
		{
			printf("z = %d\n", k);
			for(int j = 0; j <= y; j++)
			{
				for(int i = 0; i <= x; i++)
				{
					printf("%d ", dp[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
}
