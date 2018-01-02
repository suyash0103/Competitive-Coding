#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100001];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		ll n, left = 0, right = 0, pos = 0, minSum = 0, sum = 0, flag = 0;
		scanf("%lld", &n);
		for(ll j = 0; j < n; j++)
		{
			scanf("%lld", &a[j]);
			right = right + a[j];
		}
		left = a[0];
		sum = right + left;
		minSum = sum;
		for(ll j = 1; j < n; j++)
		{
			right = right - a[j - 1];
			left = left + a[j];
			sum = right + left;
			if(minSum > sum)
			{
				flag = 1;
				minSum = sum;
				pos = j;
			}
		}
		printf("%lld\n", pos + 1);
	}
}
