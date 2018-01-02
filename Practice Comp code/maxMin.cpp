#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000];

int main()
{
	int N, K;
	scanf("%d%d", &N, &K);
	for(int i = 0; i < N; i++)
		scanf("%lld", &a[i]);
	sort(a, a + N);
	int minFinal = a[K - 1] - a[0];
	int min = minFinal;
	for(int i = 0; i < N - K + 1; i++)
	{
		min = a[K + i - 1] - a[i];
		if(minFinal > min)
			minFinal = min;
	}
	printf("%d", minFinal);
}
