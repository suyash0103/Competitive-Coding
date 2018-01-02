#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	memset(a, 0, sizeof(a));
	for(int i = 0; i < q; i++)
	{
		int x, l, r, count = 0;
		scanf("%d%d%d", &x, &l, &r);
		if(x == 0)
		{
			for(int i = l; i <= r; i++)
				a[i] = 1;
		}
		else
		{
			for(int i = l; i <= r; i++)
				if(a[i] == 1)
					count++;
			printf("%d\n", count);
		}
	}
}
