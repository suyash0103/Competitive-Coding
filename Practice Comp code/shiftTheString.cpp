#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string s1, s2;
	cin >> s1 >> s2;
	vector <int> v(n);
	for(int i = 0; i < n; i++)
		v[i] = 0;
//	for(int i = 0; i < n; i++)
//		cout << v[i] << " ";
	int i = 0, j = 0, k = 0;
	while(i < n)
	{
		if(s1[j] == s2[i])
		{
			v[i] = j + 1;
			i++;
			j++;
		}
		else if(s1[j] != s2[i])
		{
			i++;
			j = 0;
		}
	}
//	for(int i = 0; i < n; i++)
//		cout << v[i] << " ";
//	cout << j;
	i = 0;
	while(i < n)
	{
		if(v[i] != 0)
			break;
		if(s1[j] == s2[i])
		{
			v[i] = j + 1;
			i++;
			j++;
		}
		else if(s1[j] != s2[i])
		{
			break;
		}
	}
//	for(int i = 0; i < n; i++)
//		cout << v[i] << " ";
	int max = -1, pos = 0;
	for(int i = 0; i < n; i++)
	{
		if(max < v[i])
		{
			max = v[i];
			pos = i + 1;
		}
	}
//	cout << max <<  " " << pos;
	if(pos > max)
	{
		cout << pos - max;
	}
	else if(pos < max)
	{
		cout << n - max + pos;
	}
}
