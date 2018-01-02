#include<bits/stdc++.h>

using namespace std;

bool a[100000];

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	int n;
	scanf("%d", &n);
	int i, j, pos = 0;
	for(int i = 0; i < 100000; i++)
		a[i] = false;
	for(int i = 0; i < l; i++)
	{
		int j = i;
		if(i == l - 1)
		{
			a[int(s[i]) - 96] = true;
			break;
		}
		while(s[j + 1] == s[i])
			j++;
		for(int k = 1; k <= j - i + 1; k++)
		{
			a[k * (int(s[i]) - 96)] = true;
		}
	}
	for(int i = 0; i < n; i++)
	{
		long long int t;
		cin >> t;
		if(a[t])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
