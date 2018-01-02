#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n, right = 0, left = 0, flag = 0;
		cin >> n;
		for(int j = 0; j < n; j++)
		{
			cin >> a[j];
			right = right + a[j];
		}
		right = right - a[0];
		if(n == 1)
		{
			printf("YES\n");
			continue;
		}
		for(int j = 1; j < n; j++)
		{
			left = left + a[j - 1];
			right = right - a[j];
			if(right == left)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
