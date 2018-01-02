#include<bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		int n, k, x, d, Pi;
		int count = 0;
		scanf("%d%d%d%d", &n, &k, &x, &d);
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &Pi);
			Pi = (x * Pi) / 100;
			count = count + max(k, Pi);
		}
		if(count <= d)
			printf("fee\n");
		else
			printf("upfront\n");	
	}
}
