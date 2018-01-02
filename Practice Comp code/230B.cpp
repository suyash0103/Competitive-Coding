#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000];

int def(int n)
{
	int count = 2;
	for(ll i = 2; i <= n / 2; i++)
		if(n % i == 0)
			count++;
	return count;
}

int main()
{
	ll n;
	scanf("%I64d", &n);
	for(ll i = 0; i < n; i++)
		scanf("%I64d", &a[i]);
	for(ll i = 0; i < n; i++)
	{
		int x = def(a[i]);
		if(x != 3)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
