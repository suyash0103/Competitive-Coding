#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000], b[100000];
float dis[100000];

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	for(int i = 0; i < n; i++)
		scanf("%lld", &b[i]);
	for(int i = 0; i < n; i++)
	{
		dis[i] = pow(a[i], 2) + pow(b[i], 2);
		dis[i] = pow(dis[i], 0.5);
	}
	int x = sizeof(dis) / sizeof(dis[0]);
	sort(dis, dis + n);
	if(dis[k] - (int)dis[k - 1] == 0)
		printf("%d", (int)dis[k - 1]);
	else
	{
		int ans = (int) dis[k - 1];
		printf("%d", ans + 1);	
	}
}
