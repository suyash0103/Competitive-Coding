#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, k;
		scanf("%lld%lld", &n, &k);
		ll min = 2;
		ll max = n * 2;
		ll sum = 0;
		ll count = 1;
		if(k == 1)
			max = 2;
		while(min <= max)
		{
			sum += min;
			min += 2;
			count++;
		}
		min -= 4;
		while(min > 2)
		{
			sum += min;
			min -= 2;
		}
		//cout << sum << endl;
		sum = sum * k;
		count = count * k;
		if(k == 1)
			count = 1;
		ll ans = sum / count;
		//cout << sum << " " << count << endl; 
		cout << ans << ".0" << endl;
	}
}
