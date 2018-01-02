#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	memset(a, 0, sizeof(a));
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int size = sizeof(a) / sizeof(a[0]);
	sort(a, a + size);
	//for(int i = 0; i < n; i++)
	//	cout << a[i] << " ";
	int flag = 0;
	for(int i = 0; i < n / 2 - 1; i++)
	{
		if(a[i] != a[i + 1])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		cout << "NO";
		exit(0);
	}
	else
	{
		if(a[n / 2] == a[n / 2 - 1])
		{
			cout << "NO";
			exit(0);
		}
		int flag1 = 0;
		for(int i = n / 2; i < n - 1; i++)
		{
			if(a[i] != a[i + 1])
			{
				flag1 = 1;
				break;
			}
		}
		if(flag1 == 1)
		{
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";  
}
