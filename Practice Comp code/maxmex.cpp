#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a[200005], b[200005];
		for(int i = 0; i < 200005; i++)
			a[i] = i;
		//memset(a, 0, sizeof(a));
		int n, k;
		scanf("%d%d", &n, &k);
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
			a[i]=  i;
		}
		sort(b, b + n);
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
//			int pos = n;
//			int posb = 0;
//			int x = k;
//			for(int i = 0; i < n; i++)
//			{
//				if(a[i] != b[posb])
//				{
//					if(k > 0)
//					{
//						b[pos] = a[i];
//						pos++;
//						k--;
//					}
//				}
//				else
//					posb++;
//			}
//			sort(b, b + pos);
//			for(int i = 0; i < pos; i++)
//				cout << b[i] << " ";
//			int adder = n;
//			while(k > 0)
//			{
//				b[pos] = adder;
//				pos++;
//				adder++;
//				k--;
//			}
//			int ans, flag = 0;
//			for(int i = 0; i < n; i++)
//			{
//				if(a[i] != b[i])
//				{
//					ans = a[i];
//					flag = 1;
//					break;
//				}
//			}
//			if(flag == 1)
//				printf("%d\n", ans);
//			else
//			{
//				for(int i = n; i <= pos; i++)
//					a[i] = i;
//				int ans, flag = 0;
//				for(int i = 0; i < pos; i++)
//				{
//					if(a[i] != b[i])
//					{
//						ans = a[i];
//						flag = 1;
//						break;
//					}
//				}
////				if(flag == 1)
////					printf("%d\n", ans);
////				else
////					printf("%d\n", pos);	
//			}
//			for(int i = 0; i < pos; i++)
//				cout << b[i] << " ";
//		}
		else
		{
			int pos = n;
			int posb = 0;
			int x = k;
			for(int i = 0; i < n; i++)
			{
				if(a[i] != b[posb])
				{
					if(k > 0)
					{
						b[pos] = a[i];
						pos++;
						k--;
					}
				}
				else
					posb++;
			}
			sort(b, b + pos);
			posb = pos;
			while(k > 0)
			{
				for(int i = 0; i < posb; i++)
				{
					if(a[i] != b[i])
					{
						if(k > 0)
						{
							b[posb] = a[i];
							posb++;
							k--;
						}
					}
					sort(b, b + posb);
				}
				sort(b, b + posb);
			}
			for(int i = 0; i < posb; i++)
				cout << b[i] << " ";
		}
	}
}
