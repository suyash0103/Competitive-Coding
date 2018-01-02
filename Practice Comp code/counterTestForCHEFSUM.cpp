#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define MOD 4294967295;

ll a[100000], prefSum[100000], sufSum[100000];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		//ll ans = 2 * pow(10, 9) - 1;
		//ll ans = 20000;
//		ll ans = 1;
//		for(int i = 0; i < n; i++)
//		{
//			ans = ans % MOD;	
//			printf("%lld ", ans);
//			ans = (ans * 2) % MOD;	
//		}
		//for(int i = n / 2; i < n; i++)
		//	printf("%lld ", ans++);
//		ll ans1 = 100000;
//		ll ans2 = 99999;
//		for(int i = 0; i < n; i++)
//		{
//			if(i % 2 == 0)
//			{
//				printf("%lld ", ans1);
//				//ans1++;
//			}
//			else
//			{
//				printf("%lld ", ans2);
//				//ans2--;
//			}
//		}
//		for(int i = 0; i < n; i++)
//			a[i] = 100000;
//		prefSum[0] = a[0];
//		for (int i = 1; i < n; i++) 
//		{
//			prefSum[i] = prefSum[i - 1] + a[i];
//		}
//		sufSum[n - 1] = a[n - 1];
//		for (int i = n - 2; i >= 0; i--) 
//		{
//			sufSum[i] = sufSum[i + 1] + a[i];
//		}
//		for(int i = 0; i < n; i++)
//			printf("%lld ", prefSum[i] + sufSum[i]);
//		int floor = 99991, ceiling = 100000, range = (ceiling - floor);
//		for(int i = 0; i < n; i++)
//		{
//			int rnd = floor + int((range * rand()) / (RAND_MAX + 1.0));
//			cout << rnd << " ";
//		}
		int ans = 92681;
		for(int i = 0; i < 92681; i++)
		{
			printf("%d ", ans);
			ans--;
		}
		for(int i = 0; i < n - 92681; i++)
		{
			printf("1 ");
		}
		printf("\n");
	}
}
