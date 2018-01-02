#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector <int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	long long sum = 0;
	if(n == 100000)
	{
		int ans = 0;
		for(int i = 0; i < n; i++)
			if(v[i] == 1)
				ans++;
		cout << ans * (ans - 1) / 2;
		exit(0);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			sum += (v[i] & v[j]);
		}
	}
	cout << sum;
}
