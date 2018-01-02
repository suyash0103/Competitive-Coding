#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000];

int main()
{
	ll n, k;
	scanf("%lld%lld", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	sort(a, a + n);
	int ans = 0;
	int i = 0;
	int count = 0;
	while(ans + a[i] <= k && i < n)
	{
		ans = ans + a[i];
		i++;
		count++;
	}
	printf("%d", count);
}
