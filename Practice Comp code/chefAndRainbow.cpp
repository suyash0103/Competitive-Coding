#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int j = 0; j < n; j++)
			scanf("%d", &a[j]);
		int flag = 0;
		if(n % 2 != 0)
		{
			for(int j = 0; j < n/2 + 1; j++)
			{
				if(a[j] != a[n - j - 1])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				if(a[n/2] <= 7)
					printf("yes\n");
				else
					printf("no\n");	
			}
			else
			{
				printf("no\n");	
			}	
		}
		else
		{
			for(int j = 0; j < n/2; j++)
			{
				if(a[j] != a[n - j - 1])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				printf("yes\n");	
			}
			else
			{
				printf("no\n");	
			}	
		}
	}
}
