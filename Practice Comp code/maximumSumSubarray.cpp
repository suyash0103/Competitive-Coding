#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100001];

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		int n;
		ll m;
		ll max = 0, maxFinal = 0, modu;
		scanf("%d%lld", &n, &m);
		for(int j = 0; j < n; j++)
		{
			scanf("%lld", &a[j]);
			modu = a[j] % m;
			if(max < modu)
				max = modu;
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++)
		{
			
		}
	}
}
