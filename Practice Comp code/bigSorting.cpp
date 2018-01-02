#include<bits/stdc++.h>

using namespace std;

bool func(string i, string j)
{
	int n = i.length();
	int m = j.length();
	if(n == m)
	{
		return (i < j);
	}
	return (n < m);
}

int main()
{
	int n;
	//string s;
	scanf("%d", &n);
	vector <string> s(n);
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s.begin(), s.end());
	for(int i = 0; i < n; i++)
		cout << s[i] << endl;
}
