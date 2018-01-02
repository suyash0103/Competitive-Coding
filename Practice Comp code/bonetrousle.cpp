#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, k, b;
		scanf("%lld%lld%lld", &n, &k, &b);
		ll min = b * (b + 1) / 2;
		ll max = b * (2 * k - b + 1) / 2;
		if (n < min || n > max)
		{
			printf("-1\n");
		}
		else
		{
			ll a[100000], sum1 = 0, sum2 = 0;
			for(ll i = 1; i <= b; i++)
			{
				a[i - 1] = i;
				//sum1 = sum1 + a[i];
			}
			ll p = (n - min) / b;
			ll q = (n - min) % b;
			for(ll i = 1; i <= b; i++)
				a[i - 1] = a[i - 1] + p;
			for(ll i = b; i > b - q; i--)
				a[i - 1]++;
			for(ll i = 0; i < b; i++)
				printf("%lld ", a[i]);
			printf("\n");
		}
	}
}
