#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[1001][1001];

int main()
{
	ll n, m;
	int k;
	scanf("%lld%lld%d", &n, &m, &k);
	ll max = n * m;
	for(int i = 0; i < k; i++)
	{
		scanf("%lld%lld%lld", &a[i][0], &a[i][1], &a[i][2]);
		for(int j = 0; j < i; j++)
		{
			if(a[i][0] == a[j][0])
			{
				if(a[i][1] < a[j])
			}
		}
	}
}
