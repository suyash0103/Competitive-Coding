#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[1000005];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		ll r;
		scanf("%d%lld", &n, &r);
		for(int i = 0; i < n; i++)
			scanf("%lld", &a[i]);
		ll max = 1000000005;
		ll min = -1;
		if(a[0] < r && min < a[0])
			min = a[0];
		else if(a[0] > r && max > a[0])
			max = a[0];
		int flag = 0;
		for(int i = 1; i < n - 1; i++)
		{
			if(a[i] < r && min > a[i])
			{
				cout << "NO" << endl;
				flag = 1;
				break;
			}
			else if(a[i] > r && max < a[i])
			{
				cout << "NO" << endl;
				flag = 1;
				break;
			}
			else if(a[i] < r && min < a[i])
			{
				min = a[i];
			}
			else if(a[i] > r && max > a[i])
			{
				max = a[i];
			}
		}
		if(flag == 0)
		{
			cout << "YES" << endl;
		}
	}
}
