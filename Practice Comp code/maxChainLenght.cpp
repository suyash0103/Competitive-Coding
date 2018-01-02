#include<bits/stdc++.h>

using namespace std;

int maxLenghtChain(int a[100], int m)
{
	int lis[100];
	for(int y = 0; y < m; y++)
		lis[y] = 1;
	int i, j;
	for(i = 1; i < m; i = 1 + 2)
	{
		for(j = 0; j < i; j = j + 2)
		{
			if(a[i] > a[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
		}
	}
	int max = 0;
	for(int x = 0; x < m; x++)
		if(max < lis[x])
			max = lis[x];
	return max;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for(int i = 0; i < 2*n; i++)
		scanf("%d", &a[i]);
	printf("%d", maxLengthChain(a, 2 * n));
}
