#include<bits/stdc++.h>

using namespace std;

int a[8], b[100000], c[10000][2];

int sum = 0;

int recur(int a[], int b[], int n)
{
	return sum;
}

int main()
{
	memset(b, 0, sizeof(b));
	for(int i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
		//b[a[i]]++;
	}
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		//&c[][0], &c[i][1]
		b[u - 1]++;
		b[v - 1]++;
	}
	int sum = 0;
	for(int i = 0; i < 8; i++)
	{
		//cout << b[i] << " ";
		if (b[i] == 0)
		{
			sum = sum + a[i];
			//cout << a[i] << endl;
		}
	}
	int ans = recur(a, b, n);
	cout << ans;
}
