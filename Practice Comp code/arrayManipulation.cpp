#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	ll n, m;
	scanf("%lld%lld", &n, &m);
	vector <ll> vec(n + 10);
	fill(vec.begin(), vec.end(), 0);
	while(m--)
	{
		ll a, b, k;
		scanf("%lld%lld%lld", &a, &b, &k);
		//for(ll i = a - 1; i < b; i++)
		//	vec[i] = vec[i] + k;
		vec[a] = vec[a] + k;
		if((b + 1) <= n)
			vec[b + 1] = vec[b + 1] - k;
	}
	ll max = 0, x = 0;
	for(int i = 0; i < n; i++)
	{
		x = x + vec[i];
		if(max < x)
			max = x;
	}
	printf("%lld\n", max);
}
