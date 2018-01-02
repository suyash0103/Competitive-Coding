//WRONG SOLUTION

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		vector <ll> v(n), ans(n);
		for(int i = 0; i < n; i++)
			scanf("%lld", &v[i]);
		sort(v.begin(), v.end());
		ll x = v[n - 1];
		ll y = v[0];
		ll diff = x - y;
		ans[0] = x * 2;
		int flag = 0;
		for(int i = 1; i < n; i++)
		{
			ans[i] = ans[i - 1] + diff;
			if(ans[i] > 1000000)
			{
				flag = 1;
				printf("NO\n");
				break;
			}
		}
		if(flag == 0)
		{
			cout << "YES\n";
			for(int i = 0; i < n; i++)
			{
				printf("%lld ", ans[i]);
			}
			cout << endl;
		}
	}
}
