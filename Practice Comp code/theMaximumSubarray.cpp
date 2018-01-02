#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n, count = 0;
		scanf("%d", &n);
		int maxCont = 0, maxNonCont = 0, maxFinal = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if(a[i] < 0)
				count++;	
		}
		if(count == n)
		{
			sort(a, a + n);
			printf("%d %d\n", a[n - 1], a[n - 1]);
			continue;
		}
		for(int i = 0; i < n; i++)
		{
			if(a[i] > 0)
				maxNonCont = maxNonCont + a[i];
			maxCont = maxCont + a[i];
			if(maxFinal < maxCont)
				maxFinal = maxCont;
			if(maxCont < 0)
				maxCont = 0;
		}
		printf("%d %d\n", maxFinal, maxNonCont);
	}
}
