#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll a[505];
		ll n, p;
		int c[2];
		c[0] = 0;
		c[1] = 0;
		scanf("%lld%lld", &n, &p);
		ll u = p / 2;
		ll v = p / 10;
		for(int i = 0; i < n; i++)
		{
			ll x;
			scanf("%lld", &x);
			if(x >= u)
				c[0]++;
			if(x <= v)
				c[1]++;
		}
		if(c[0] == 1 && c[1] == 2)
			printf("yes\n");
		else
			printf("no\n");
	}
}
