#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

vector <ll> a(3001), b(3001);

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	sort(a.begin(), a.begin() + n);
	ll diff = 0;
	if(k > n / 2)
		k = n - k;
	for(int i = 0; i < k; i++)
	{
		b[i] = a[n / 2];
		a.erase(a.begin() + n / 2);
		n--;
	}
	//printf("%lld", diff);
	//for(int i = 0; i < n; i++)
	//	printf("%lld ", a[i]);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < k; j++)
		{
			diff = diff + abs(b[j] - a[i]);
		}
	}
	printf("%lld", diff);
}
