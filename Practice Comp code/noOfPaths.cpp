#include<bits/stdc++.h>

using namespace std;

int count = 0;

int noOfPaths(int m, int n)
{
	if(m < 0 || n < 0)
		return 0;
	else if(m == 0 && n == 0)
		return 1;
	else
	{
		return count + noOfPaths(m - 1, n) + noOfPaths(m, n - 1);
	}
}

int main()
{
	int m, n;
	scanf("%d", &m, &n);
	noOfPaths(m, n);
	printf("%d", count);
}
