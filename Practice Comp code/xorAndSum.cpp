#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll binToDec(ll n)
{
	ll num = 0, i = 0;
	while(n != 0)
	{
		int a = n % 10;
		a = a * pow(2, i);
		num = num + a;
		i++;
		n = n / 10;
	}
	return num;
}

int main()
{
	ll x, y;
	scanf("%lld%lld", &x, &y);
	
	ll a = binToDec(x);
	ll b = binToDec(y);
		
	ll ans = 0;
	ll z = b;
	
	for(ll i = 0; i <= 314159; i++)
	{
		ans = ans + (a ^ (b << i));
		b = z;
	}
	printf("%lld", ans);
}
