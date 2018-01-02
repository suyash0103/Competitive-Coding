#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[1000]; 
ll b[1000];

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		int n;
		ll k;
		scanf("%d%lld", &n, &k);
		for(int j = 0; j < n; j++)
			scanf("%lld", &a[j]);
		for(int j = 0; j < n; j++)
			scanf("%lld", &b[j]);
		sort(a, a + n);
		sort(b, b + n, greater<int>());
		int flag = 0;
		for(int j = 0; j < n; j++)
		{
			if(a[j] + b[j] < k)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			printf("NO\n");
		else
			printf("YES\n");
		flag = 0;
	}
}
