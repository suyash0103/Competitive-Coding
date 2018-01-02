#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, c, m;
		scanf("%d%d%d", &n, &c, &m);
		int count = 0;
		count = count + n / c;
		int x = count;
		int y = 0;
		while(x >= m)
		{
			y = y + x / m;
			count = count + y;
			x = x - m + y;
			y = 0;
		}
		printf("%d\n", count);
	}
}
