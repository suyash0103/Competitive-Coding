#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[500005];

int main()
{
	int n, q;
	ll L, R;
	scanf("%d%d%lld%lld", &n, &q, &L, &R);
	memset(a, 0, n);
	while(q--)
	{
		int type, x, y;
		scanf("%d%d%d", &type, &x, &y);
		if(type == 1)
			a[x - 1] = y;
		else
		{
			ll max = -1;
			ll num = 0;
			for(int index = 1; index <= n; index++)
			{
				for(int j = n; j >= index; j--)
				{
					for(int i = 0; i < j; i++)
					{
						
					}
				}
			}
		}
	}
}
