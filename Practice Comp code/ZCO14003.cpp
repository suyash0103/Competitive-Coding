#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[500000];

int main()
{
	ll n;
	scanf("%lld", &n);
	for(ll i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	sort(a, a + n);
	ll max = 0, mul = 1, sum = 0;
	for(ll i = n - 1; i >= 0; i--)
	{
		sum = a[i] * mul;
		if(sum > max)
			max = sum;
		mul++;
	}
	printf("%lld", max);
}
