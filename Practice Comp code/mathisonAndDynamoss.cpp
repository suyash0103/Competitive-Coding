#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, k;
		scanf("%d%d", &n, &k);
		if(k == 1)
			printf("0\n");
		else if(k == n)
			printf("%lld\n", pow(2, n) - 1);
		else if(k == (pow(2, n - 1) - 1))
			printf("1\n");
	}
}
