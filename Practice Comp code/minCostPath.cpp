#include<bits/stdc++.h>

using namespace std;

int column(int a[51][51], int row, int column)
{
	int dp[51][51];
	for(int i = 1; i < row; i++)
		dp[i][0] = d[i - 1][j] + a[i][j];
	for(int i = 1; i < column; i++)
		dp[0][i] = dp[0][i - 1] + a[i][j];
	for(int i = 2; i < row; i++)
		for(int j = 2; j < column; j++)
			dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j], d[[i][j - 1]]) + a[i][j];
	return dp[row - 1][column - 1];
}

int main()
{
	int row, column;
	scanf("%d%d", &row, &column);
	int a[51][51];
	for(int i = 0; i < row; i++)
		for(int j = 0; j < column; j++)
			scanf("%d", &a[i][j]);
	printf("%d", count(a, row, column));
}
