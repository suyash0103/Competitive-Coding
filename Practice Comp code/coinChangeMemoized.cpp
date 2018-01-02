#include <bits/stdc++.h>

using namespace std;

int count(int a[], int n, int m)
{
	int table[m + 1][n + 1];
	for(int i = 0; i <= m; i++)
		table[0][i] = 0;
	for(int i = 0; i <= m; i++)
		table[1][i] = 1;
	for(int i = 2; i < m + 1; i++)
	{
		for(int j = 0; j < n + 1; j++)
		{
			if(i > j)
				table[i][j] = table[i - 1][j];
			else
				table[i][j] = table[i - 1][j] + table[i][j - i];
		}
	}
	return table[m][n];
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[100];
	for(int i = 0; i < m; i++)
		scanf("%d", &a[i]);
	printf("%d", count(a, n, m));
}
