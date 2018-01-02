#include<bits/stdc++.h>

using namespace std;

int a[10000], b[10000];

int main()
{
	int n, j = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		int x = a[0];
		if(a[i] < x)
		{
			b[j] = a[i];
			j++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= a[0])
		{
			b[j] = a[i];
			j++;
		}
	}
	for(int i = 0; i < n; i++)
		cout << b[i] << " ";
}
