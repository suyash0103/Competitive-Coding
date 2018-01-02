#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[1001];
		memset(a, 0, sizeof(a));
		int n, k;
		cin >> n >> k;
		vector <int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			a[v[i]]++;
		}
		if(n == 2)
		{
			cout << "YES" << endl;
			continue;
		}
		int freq = 0, flag = 0;
//		for(int i = 0; i < 1000; i++)
//			cout << a[i] << " ";
		for(int i = 0; i < 1000; i++)
		{
			if(a[i] == 0)
				continue;
			if(a[i] == n - 1)
			{
				flag = 1;
				cout << "YES" << endl;
				break;
			}
			freq = 0;
		}
		if(flag == 0)
			cout << "NO" << endl;
	}
}
