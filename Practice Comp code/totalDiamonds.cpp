#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[4000009];
ll b[4000009];
ll c[4000009];

int main()
{
	c[0] = 0;
	c[1] = 0;
	c[2] = 2 * 2;
	c[3] = c[2] + 3 * 2;
	c[4] = c[3] + 4 * 2;
	c[5] = c[4] + 5 * 2;
	c[6] = c[5] + 6 * 2;
	c[7] = c[6] + 7 * 2;
	c[8] = c[7] + 8 * 2;
	c[9] = c[8] + 9 * 2;
	for(ll i = 0; i <= 9; i++)
	{
		a[i] = i;
	}
	for(ll i = 10; i <= 2000002; i++)
	{
		//cout << i << endl;
		vector <ll> vec;
		vec.clear();
		ll x = i;
		while(x > 0)
		{
			ll k = x % 10;
			x = x / 10;
			vec.push_back(k);
		}
		ll odd = 0, even = 0;
		for(ll it = 0; it < vec.size(); it++)
		{
			if(vec[it] % 2 == 0)
				odd += vec[it];
			else
				even += vec[it];
		}
		ll sum = abs(odd - even);
		a[i] = sum;
		c[i] = c[i - 1] + a[i] * 2;
	}
	b[0] = 0;
	b[1] = 2;
	b[2] = 12;
	b[3] = 36;
	b[4] = 80;
	for(ll i = 5; i <= 2000002; i++)
	{
		ll x = i + 1;
		ll y = x + i - 3;
		ll add = abs(c[y] - c[x - 1]);
		b[i] = b[i - 1] + add + a[i * 2 - 1] * 2 + a[i * 2];
	}
	ll t;
	scanf("%lld", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		printf("%lld\n", b[n]);
	}
}
