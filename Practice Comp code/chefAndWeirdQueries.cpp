#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll y;
		scanf("%lld", &y);
		ll ans = 0;
		for(int i = 1; i <= 700; i++)
		{
			ll sum = 0;
			ll x = y - i;
			if(x > 0)
			{
				x = sqrt(x);
				ans += x;
			}
		}
		cout << ans << endl;
	}
}
