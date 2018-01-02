#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100005][4];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		ll sum = 0;
		ll prevSum = INT_MAX;
		ll pos = -1;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				scanf("%lld", &a[i][j]);
				sum += a[i][j];
			}
			if(prevSum > sum)
			{
				prevSum = sum;
				pos = i;
			}
			sum = 0;
		}
		ll q;
		scanf("%lld", &q);
		while(q--)
		{
			ll val;
			scanf("%lld", &val);
			sum = a[pos][0] + a[pos][1] * val + a[pos][2] * val * val + a[pos][3] * val * val * val;
			printf("%lld\n", sum);
		}
	}
}
