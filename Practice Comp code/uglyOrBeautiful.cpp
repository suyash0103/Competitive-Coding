#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[10005], b[10005], c[10005];

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		memset(a, 0, 10005);
		memset(b, 0, 10005);
		memset(c, 0, 10005);
		ll n;
		scanf("%d", &n);
		for(ll j = 0; j < n; j++)
		{
			scanf("%lld", &a[j]);
			b[a[j]]++;
			c[j] = a[j];
		}
		sort(c, c + n);
		ll flag = 0, count = 0;
		for(ll j = 1; j <= n; j++)
		{
			if(b[j] != 1)
			{
				flag = 1;
				break;
			}
			if(a[j - 1] == c[j - 1])
				count++;
			if(count == n)
			{
				//printf("a\n");
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			printf("Ugly\n");
		else
			printf("Beautiful\n");
		//cout << count << endl;
		/*for(int j = 0; j < n; j++)
		{
			printf("%d ", c[j]);
		}
		for(int j = 1; j <= n; j++)
			printf("%d ", b[j]);
		cout << count;*/
	}
}
