#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[10000000];

bool isPrime(ll n)
{
	int flag = 0;
	for(ll i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		return false;
	else
		return true;
}

int main()
{
	ll pos = 0;
	for(ll i = 2; i <= 1000000; i++)
	{	
		if(isPrime(i))
		{
			a[pos] = i;
			pos++;
		}
	}
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll m, n;
		scanf("%lld%lld", &m, &n);
		int j = 0;
		while(a[j] <= n && j < pos)
		{
			if(a[j] < m)
			{
				j++;
				continue;
			}
			else
			{
				printf("%lld ", a[j]);
				j++;
			}	
		}
		cout << endl;
	}
}
