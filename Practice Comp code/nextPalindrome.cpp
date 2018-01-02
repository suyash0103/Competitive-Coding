#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll reverse(ll n)
{
	ll x  = 0;
	while(n > 0)
	{
		x = x * 10 + n % 10;
		n = n / 10;
	}
	return x;
}

int main() 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int flag = 0;
		ll n;
		scanf("%lld", &n);
		while(flag == 0)
		{
			ll x = reverse(n);
			if(x == n)
				flag = 1;
			else
				n++;
		}
		printf("%lld", n);
	}
}
