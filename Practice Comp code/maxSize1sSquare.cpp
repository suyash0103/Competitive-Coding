#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	
	int ans[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i == 0)
				ans[i][j] = a[i][j];
			else if(j == 0)
				ans[i][j] == a[i][j];
			else if(a[i][j] == 0)
				ans[i][j] = 0;
			else
				ans[i][j] = min(ans[i - 1][j], ans[i][j - 1], ans[i - 1][j - 1]);
		}
	}
	
	int max = ans[0][0];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(max < ans[i][j])
				max = ans[i][j];
		}
	}
	
	cout << ans;
}
