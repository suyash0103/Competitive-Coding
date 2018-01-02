#include <bits/stdc++.h>

using namespace std;

int func(int n, int a[3], int m)
{
	if(n < 0)
		return 0;
	else if(n == 0)
		return 1;
	else if(m <= 0 && n >= 1)
		return 0;
	else
	{
		return max((n, a, m - 1), (n - a[m-1], a, m));
	}
}

int main()
{
	int n;
	int a[3];
	for(int i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	int m = sizeof(a)/sizeof(a[0]);
	printf("%d", func(n, a, m));
}
