#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll v[10000][10000];
ll final[100000];
//int b[100000][3];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		memset(v, 0, sizeof(v));
		memset(final, 0, sizeof(final));
		//memset(b, 0, sizeof(b));
		for(int j = 0; j < m; j++)
		{
			int type, l, r;
			scanf("%d%d%d", &type, &l ,&r);
			//b[j][0] = type;
			//b[j][1] = l;
			//b[j][2] = r;
			if(type == 1)
			{
				for(int k = l; k <= r; k++)
				{
					v[j][k - 1]++;
					final[k - 1]++;
					final[k - 1] = final[k - 1] % 1000000007;
				}
				//for(int k = 0; k < n; k++)
				//{
				//	final[k] = final[k] + v[j][k];
				//	final[k] = final[k] % 1000000007;
				//}
			}
			else
			{
				for(int k = l; k <= r; k++)
				{
					for(int x = 0; x < n; x++)
					{
						v[j][x] = v[j][x] + v[k - 1][x];
						final[x] = final[x] + v[k - 1][x];
						final[x] = final[x] % 1000000007;
						//final[x] = final[x] + v[j][x];
						//v[j][x] = v[j][x] % 1000000007;
					}	
				}
				/*for(int x = 0; x < n; x++)
				{
					final[x] = final[x] + v[j][x];
					final[x] = final[x] % 1000000007;
				}*/
			}
		}
		for(int x = 0; x < n; x++)
			printf("%lld ", final[x]);
		printf("\n");
	}
}
