#include<bits/stdc++.h>

using namespace std;

int a[10000], b[10000];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int m, n;
		cin >> m >> n;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		/*sort(b, b + n);
		for(int i = 0; i < n; i++)
		{
			int key = m - b[i];
			int low = i + 1, high = n, pos = 0;
			while(low <= high)
			{
				//printf("a");
				int mid = (low + high) / 2;
				if(b[mid] < key)
					low = mid;
				else if(b[mid] > key)
					high = mid;
				else
				{
					pos = mid;
					break;
				}
			}
			//printf("%d", pos);
			if(pos != 0)
			{
				int ans1 = i + 1, ans2, k;
				for(int j = 0; j < n; j++)
				{
					if(a[j] == b[i])
					{
						k = j;
						break;
					}
				}
				for(int j = 0; j < n; j++)
				{
					if(a[j] == b[pos] && j != k)
					{
						ans2 = j + 1;
						break;
					}
				}
				printf("%d %d", ans1, ans2);
				break;
			}
		}*/
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] + a[j] == m)
				{
					printf("%d %d\n", i + 1, j + 1);
					break;
				}
			}
		}
		//printf("\n");
	}
}
