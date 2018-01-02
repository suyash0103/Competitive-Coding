#include<bits/stdc++.h>

using namespace std;

int a[100000], b[100000];

int main()
{
	/*memset(b, 0, 100000);
	int n, k;
	int rangeB = 0;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[a[i] - 1] = 1;
		if(rangeB < a[i])
			rangeB = a[i];	
	}
	int j, loc = 0, count = 0, flag = 0;
	for(int i = 0; i < rangeB; i++)
	{
		printf("a");
		count++;
		int j = i + k - 1;
		if(j >= rangeB)
			j = rangeB - 1;
		while(loc <= j && b[j] == 0 && j < n)
			j--;
		if(j < loc)
		{
			flag = 1;
			break;
		}
		else
		{
			loc = j + 1;
			j = j + k;
			i = j;
		}
	}
	printf("%d", count);
	//printf("%d", rangeB);
	//for(int i = 0; i < rangeB; i++)
	//	printf("%d ", b[i]);*/
	int n, k;
	//int rangeB = 0;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	int loc = 0;
	int i = 0;
	int count = 0;
	while(i < n)
	{
		count++;
		loc = a[i] + k;
		while(i < n && a[i] <= loc)
			i++;
		i--;
		loc = a[i] + k;
		while(i < n && a[i] <= loc)
			i++;
	} 
	printf("%d", count);
}
