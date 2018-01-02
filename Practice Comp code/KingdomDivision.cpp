#include <bits/stdc++.h>

using namespace std;

vector <int> vec[1000];

long int fact(int n)
{
	long int facto = 1;
	for(int i = n; i >= 1; i--)
		facto = facto * i;
	return facto;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(vec[i].size() > 1)
			count++;
	}
	long int sum = 0;
	for(int i = 1; i < count; i++)
	{
		long int nume = fact(count);
		long int deno1 = fact(i);
		long int deno2 = fact(count - i);
		sum = sum + (nume) / ((deno1) * (deno2));
	}
	long int ans = (sum + 2) ;
	printf("%ld", ans);
}
