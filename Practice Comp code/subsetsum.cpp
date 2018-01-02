#include<bits/stdc++.h>

using namespace std;

int subset(int a[100], int n, int x)
{
	if(x < 0 || n < 0)
		return 0;
	else if(x == 0)
		return 1;
	else if(n < 0 && x >= 1)
		return 0;
	else
		return min(subset(a, n - 1, x), subset(a, n, x - a[n - 1]));
}

int main()
{
	int n, a[100], x;
	scanf("%d", &x);
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int b = subset(a, n, x);
	if(b > 0)
		cout << "YES";
	else
		cout << "NO";
}
