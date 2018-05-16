#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	int a[r][c];
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			int u;
			cin >> u;
			a[i][j] = u;
		}
	}
	int top = 0, bottom = r - 1, left = 0, right = c - 1;
	int dir = 0;
	while(top <= bottom && left <= right)
	{
		if(dir == 0)
		{
			for(int i = left; i <= right; i++)
			{
				cout << a[top][i] << " ";
			}
			top++;
			dir = 1;
		}
		else if(dir == 1)
		{
			for(int i = top; i <= bottom; i++)
			{
				cout << a[i][right] << " ";
			}
			right--;
			dir = 2;
		}
		else if(dir == 2)
		{
			for(int i = right; i >= left; i--)
			{
				cout << a[bottom][i] << " ";
			}
			bottom--;
			dir = 3;
		}
		else if(dir == 3)
		{
			for(int i = bottom; i >= top; i--)
			{
				cout << a[i][left] << " ";
			}
			left++;
			dir = 0;
		}
	}
}
