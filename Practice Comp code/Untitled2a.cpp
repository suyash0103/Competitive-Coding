#include<bits/stdc++.h>

using namespace std;

int main()
{
	cout << "h";
	int t;
	scanf("%d", &t);
	while(t--)
	{
		cout << "he";
		int n, k;
		scanf("%d%d", &n, &k);
		int a[200005], b[200005], c[200005];
		memset(c, 0, sizeof(c));
		for(int i = 0; i < 200005; i++)
			a[i] = i;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
			c[b[i]]++;
			
		}
		sort(b, b + n);
		int max = b[n - 1];
		if(k == 0)
		{
			int ans, flag = 0;
			for(int i = 0; i < n; i++)
			{
				if(a[i] != b[i])
				{
					ans = a[i];
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				printf("%d\n", ans);
			else
				printf("%d\n", n);
		}
//		else
//		{
//			int x = k;
//			int ans, posb = 0, flag = 0;
//			for(int i = 0; i < n + x; i++)
//			{
//				if(k > 0 && a[i] != b[posb] && posb < n)
//				{
//					ans = a[i];
//					flag = 1;
//					k--;
//				}
//				else
//					posb++;
//				//cout << k;
//			}
////			while(k > 0)
////			{
////				
////			}
////			if(flag == 0)
////				printf("%d\n", n + k);
////			else if(flag == 1)
////				printf("%d\n", ans);
////			else
////				printf("%d\n", ans + 1);
//			cout << flag << " " << posb << " " << k;
//		}
		else
		{
			int ans, i;
			for(i = 0; i <= max; i++)
			{
//				if(k == 0 && c[i] == 0)
//				{
//					ans = i + 1;
//					c[i] = 1;
//					break;
//				}
				if(k == 0)
				{
					break;
				}
				else if(k > 0 && c[i] == 0)
				{
					ans = i;
					c[i] = 1;
					k--;
				}
			}
			if(k > 0)
			{
				ans = max + k + 1;
				printf("%d\n", ans);
			}
			else
			{
				if(i == max + 1)
				{
					ans = i;
					printf("%d\n", ans);
				}
				else
				{
					for(int j = 0; j <= max; j++)
					{
						if(c[j] == 0)
						{
							ans = c[j];
							break;
						}
					}
					printf("%d\n", ans);
				}
			}
		}
	}
}
