#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int n, t1, t2;
	scanf("%d%d%d", &n, &t1, &t2);
	int x = t1 * n;
	int y = t2 * n;
	int z = min(x, y);
	for(int j = 1; j <= n; j++)
	{
		a[j - 1] = t1 * j + t2  * (n - j);
		//cout << a[j - 1] << endl;	
	}
	//cout << a[0];
	int size = sizeof(a) / sizeof(a[0]);
	sort(a, a + n);
//	for(int i = 0; i < n; i++)
//		cout << a[i];
	int minimum = a[0];
	int minFinal = min(z, minimum);
	printf("%d", minFinal);
	
}
