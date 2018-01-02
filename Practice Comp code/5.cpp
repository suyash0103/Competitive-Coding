#include<bits/stdc++.h>

using namespace std;

int arr[100][100];

int main()
{
	int t;
	int m, n;
	scanf("%d", &t);
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	for(int i = 0; i < t; i++)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		int count = 0;
		for(int j = a; j <= c; j++)
		{
			for(int k = b; k <= d; k++)
			{
				if(arr[j][k] == 1)
					count++;
			}
		}
		printf("%d\n", count);
	}
}
