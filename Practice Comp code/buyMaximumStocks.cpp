#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int j = 1;
	long long int k;
	long long int count = 0;
	scanf("%lld", &k);
	while(k >= 0 && j <= n)
	{
		for(int l = 1; l <= j; l++)
		{
			if(k - a[j - 1] >= 0)
			{
				k = k - a[j - 1];
				count++;
			}
		}
		j++;
	}
	printf("%lld", count);
}
