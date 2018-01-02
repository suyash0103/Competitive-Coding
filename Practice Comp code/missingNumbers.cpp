#include<bits/stdc++.h>

using namespace std;

int a[200000], b[200000];

int main()
{
	memset(a, 0, 200000);
	int m, n, num;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		a[num]--;
	}
	//sort(a, a + n);
	scanf("%d", &m);
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &num);
		a[num]++;
	}
	//sort(b, b + m);
	/*int i = 0, j = 0;
	int count = 0;
	while(i < n && j < m)
	{
		if(a[i] == b[j])
		{
			i++;
			j++;
		}
		else
		{
			printf("%d ", b[j]);
			j++;
		}
	}*/
	//printf("%d", a[204]);
	for(int i = 0; i < 200000; i++)
		if(a[i] > 0)
			printf("%d ", i);
}
