#include <iostream>
#include <cstring>

using namespace std;

typedef long long int ll;

ll a[100000];

ll b[100000][5];

int recur(ll a[], ll b[][5], int l, int r)
{
	int i;
	for(i = l; i <= r; i++)  
	{
		if(b[i - 1][0] == 1)
		{
			for(int j = b[i - 1][1]; j <= b[i - 1][2]; j++)
			{
				a[j - 1] = a[j - 1] % (1000000007);
				a[j - 1]++;
				a[j - 1] = a[j - 1] % (1000000007);
			}
		}
		else
		{
			recur(a, b, b[i - 1][1], b[i - 1][2]);
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		memset(a, 0, 100000);
		memset(b, 0, sizeof(b));
		for(int j = 0; j < m; j++)
		{
			int type, l, r;
			scanf("%d%d%d", &type, &l, &r);
			b[j][0] = type;
			b[j][1] = l;
			b[j][2] = r;
			if(type == 1)
			{
				for(int k = l; k <= r; k++)
				{
					a[k - 1] = a[k - 1] % (1000000007);
					a[k - 1]++;
					a[k - 1] = a[k - 1] % (1000000007);
				}
			}
			else
			{
				recur(a, b, l, r);	
			}	
		}
		for(int j = 0; j < n; j++)
			printf("%lld ", a[j] % (1000000007));
		printf("\n");
	}
}
