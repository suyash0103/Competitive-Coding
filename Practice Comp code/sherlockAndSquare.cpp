#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll a, b;
		scanf("%lld%lld", &a, &b);
		ll x = ceil(sqrt(a));
		ll y = floor(sqrt(b));
		printf("%lld\n", y - x + 1);
	}
}
