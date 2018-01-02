#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		count++;
		int w = a[i];
		while(a[i] <= w + 4 && i < n)
			i++;
		i--;
	}
	printf("%d", count);
}
