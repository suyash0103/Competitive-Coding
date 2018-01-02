//recursive solution

#include<bits/stdc++.h>

using namespace std;

int palin(string s, int n, int left, int right)
{
	if(n == 1)
		return 0;
	if(n == 0)
		return 1;
	if(left < right)
	{
		if(s[left] == s[right])
			return palin(s, n - 2, left + 1, right - 1);
		else
			return palin(s, n - 1, left + 1, right) + palin(s, n - 1, left, right - 1);
	}
}

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		string s;
		cin >> s;
		int n = s.length();
		int x = palin(s, n, 0, n - 1);
		if(x == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
