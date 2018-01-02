#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int a[10000];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while(a[j] > key && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		for(int j = 0; j < n; j++)
			printf("%d ", a[j]);
		printf("\n");
	}
}
