#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int a[3001], b[3001];
	for(int i = 0; i < N; i++)
	{
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
		a[i] = u + v + w;
		b[i] = u;
	}
	int min = a[0], j;
	for(int i = 0; i < N; i++)
	{
		if(min > a[i])
		{
			min = a[i];
			j = i;
		}
	}
	for(int i = 0; i < N; i++)
	{
		if(i == j)
			continue;
		min = min + b[i];
	}
	printf("%d", min);
}
