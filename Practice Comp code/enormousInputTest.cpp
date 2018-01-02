#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	ll n, k, count = 0;
	scanf("%lld%lld", &n, &k);
	for(ll i = 0; i < n; i++)
	{
		ll ti;
		scanf("%lld", &ti);
		if(ti % k == 0)
			count++;
	}
	printf("%lld", count);
}
