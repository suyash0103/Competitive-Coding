#include<bits/stdc++.h>

using namespace std;

int a[10000];

int main()
{
	int v, n, pos;
	scanf("%d%d", &v, &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] == v)
			pos = i;
	}
	cout << pos;
}
