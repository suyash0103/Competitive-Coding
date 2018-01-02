#include<bits/stdc++.h>

using namespace std;

int b[1000][1000], a[1000];

int main()
{
	a[0] = 0;
	int n, q;
	scanf("%d%d", &n, &q);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &b[i][j]);
	int j = 0;
	//printf("0 ");
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
		{
			printf("0 ");				
			continue;
		}
		int x = b[j][i] - a[0];
		int y = a[0] - b[j][i];
		a[i] = min(x, y);
		printf("%d ", a[i]);
	}
	printf("\n");
	for(int i = 0; i < q; i++)
	{
		a[0] = 0;
		int p;
		scanf("%d", &p);
		for(int w = 0; w < n; w++)
		{
			int l;
			scanf("%d", &l);
			b[p - 1][w] = l;
		}
		
		a[p - 1] = min(b[p - 1][0] - a[0], a[0] - b[p - 1][0]);
		
		for(int k = 0; k < n; k++)
		{
			if(k == 0)
			{
				printf("0 ");
				continue;
			}
			else if(k == p - 1)
			{
				printf("%d ", a[p - 1]);
				continue;
			}
			int x = a[p - 1] + b[p - 1][k];
			int y = a[p - 1] - b[p - 1][k];
			//a[k] = min(x, y);
			if(abs(x) == abs(y))
			{
				a[k] = min(x, y);
				printf("%d ", a[k]);
			}
			else
			{
				int z = min(abs(x), abs(y));
				a[k] = z;
				printf("%d ", a[k]);
			}
		}
		
		printf("\n");
	}
}
