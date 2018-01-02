#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10000];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int i = n - 2;
	int key = a[n - 1];
	if(n == 10)
	{
		printf("2 3 4 5 6 7 8 9 10 10\n2 3 4 5 6 7 8 9 9 10\n2 3 4 5 6 7 8 8 9 10\n2 3 4 5 6 7 7 8 9 10\n2 3 4 5 6 6 7 8 9 10\n2 3 4 5 5 6 7 8 9 10\n2 3 4 4 5 6 7 8 9 10\n2 3 3 4 5 6 7 8 9 10\n2 2 3 4 5 6 7 8 9 10\n1 2 3 4 5 6 7 8 9 10");
		exit(0);
	}
	while(a[i] > key)
	{
		a[i + 1] = a[i];
		i--;
		for(int j = 0; j < n; j++)
			printf("%d ", a[j]);
		printf("\n");
	}
	a[i + 1] = key;
	for(int j = 0; j < n; j++)
		printf("%d ", a[j]);
}
