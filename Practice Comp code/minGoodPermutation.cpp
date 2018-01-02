#include<bits/stdc++.h>

using namespace std;

int s[100000];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		if(n % 2 == 0)
		{
			int k = 2, l = 1;
			for(int j = 1; j <= n; j++)
			{
				if(j % 2 == 1)
				{
					printf("%d ", k);
					k = k + 2;
				}
				else
				{
					printf("%d ", l);
					l = l + 2;
				}
			}
			printf("\n");
		}
		else
		{
			int k = 2, l = 1;
			for(int j = 1; j <= n - 3; j++)
			{
				if(j % 2 == 1)
				{
					printf("%d ", k);
					k = k + 2;
				}
				else
				{
					printf("%d ", l);
					l = l + 2;
				}
			}
			printf("%d %d %d", n - 1, n, n - 2);
			printf("\n");
		}
	}
}
