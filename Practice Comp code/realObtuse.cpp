#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		ll A, B;
		ll k;
		scanf("%lld%lld%lld", &k, &A, &B);
		float x = (float) (360 / k);
		if((B - A) * x == 180)
			printf("0\n");
		else
		{
			if(k % 2 == 0)
			{
				if((k / 2) - 2 >= 0)
					printf("%lld\n", (k / 2) - 2);
				else
					printf("0\n");	
			}
			else
			{
				if((k + 1) / 2 - 2 >= 0)
					printf("%lld\n", (k + 1) / 2 - 2);
				else
					printf("0\n");
			}
		} 
	}
}
