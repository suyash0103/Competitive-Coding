#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000], b[100000];

int main()
{
	int n;
	ll d;
	scanf("%d%lld", &n, &d);
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	for(int i = 0; i < n; i++)
		scanf("%lld", &b[i]);
	int pairs = 0;
	ll diff = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] - b[j] > d)
				diff++;
			else 
				break;
		}
	}
	printf("%lld", diff);
}
