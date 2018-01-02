#include<bits/stdc++.h>

using namespace std;

int a[2][100000] = {0};

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 0; i < 2; i++)
		{
			for(int j = 0; j < n; j++)
			{
				char c;
				cin >> c;
				if(c == '*')
					a[i][j] = 1;
			}
		}
		int lineHor = 0, lineVer = 0, flag1 = 0, flag2 = 0, num1 = 0, num2 = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[0][i] == 1)
				flag1 = 1;
			if(a[1][i] == 1)
				flag2 = 1;
		}
		if(flag1 == 1 && flag2 == 1)
		{
			lineHor = 1;
			int x1 = 0, y1 = 0;
			for(int i = 0; i < n; i++)
			{
				if(a[0][i] == 1)
					x1++;
				if(a[1][i] == 1)
					y1++;
				if(x1 > 1 || y1 > 1)
				{
					lineVer++;
					x1 = 0;
					y1 = 0;
				}
			}
			cout << lineVer + lineHor << endl;
		}
		else if((flag1 == 0 && flag2 > 0) || (flag1 > 0 && flag2 == 0))
		{
			int ans = 0;
			for(int i = 0; i < n; i++)
			{
				if(a[0][i] == 1)
					ans++;
				else if(a[1][i] == 1)
					ans++;
			}
			cout << ans - 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
}
