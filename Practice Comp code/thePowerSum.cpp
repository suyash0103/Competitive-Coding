#include<bits/stdc++.h>

using namespace std;

int count = 0;

int func(int n, int k, int n1)
{
	int val = n - pow(n1, k);
	if(val < 0)
		return 0;
	else if(val == 0)
		return (1);
	/*for(int i = 1; i <= pow(n1, 1 / x), i++)
	{
		n = n - pow(i, x);
		if(n == 0)
		{
			count++;
			n = n1;
			continue;
		}
		for(int j = i + 1; j <= pow(n1, 1 / x); j++)
		{
			
		}
	}*/
	else
		return func(val, k, n1 + 1) + func(n, k, n1 + 1);
}

int main()
{
	int x, n;
	scanf("%d%d", &x, &n);
	int ans = func(x, n, 1);
	printf("%d", ans);
}
