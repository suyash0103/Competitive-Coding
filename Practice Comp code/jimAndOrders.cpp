#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

/*ll a[1000];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		ll u, v;
		scanf("%lld%lld", &u, &v);
		//b[i] = u + v;
		a[i] = u + v;
	}
	//sort(b, b + n);
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j)
				continue;
			if(a[i] > a[j])
				k++;
		}
		printf("%d ", k + 1);
		k = 0;
	}
}*/

int main()
{
	int n;
	scanf("%d", &n);
	map <ll, ll> m;
	for(ll i = 1; i <= n; i++)
	{
		ll u, v;
		scanf("%d%d", &u, &v);
		m.insert(make_pair(u + v, i));
	}
	map <ll, ll> :: iterator it;
	for(it = m.begin(); it != m.end(); it++)
		printf("%lld ", it -> second);
	
}








