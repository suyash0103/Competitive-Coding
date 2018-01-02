#include<bits/stdc++.h>

using namespace std;

int a[10000];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	printf("%d\n", n);
	int k = n;
	while(n)
	{
		int i = k - n, count = 1;
		//cout << i << " ";
		while(a[i + 1] == a[i] && i < k - 1)
		{
			//cout << a[i] << " ";
			i++;
			count++;
		}
		n = n - count;
		//cout << count << " ";
		if(n)
			printf("%d\n", n);
	}
}
