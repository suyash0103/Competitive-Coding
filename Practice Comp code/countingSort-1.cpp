#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int a[1000000];
int b[105];

int main()
{
	memset(b, 0, 105);
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(int i = 0; i <= 99; i++)
		printf("%d ", b[i]);
}
