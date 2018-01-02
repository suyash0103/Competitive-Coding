#include<bits/stdc++.h>

using namespace std;

int a[1000005], b[1000005];

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(i == 0)
			b[i] = a[i];
		else
		{
			b[i] = b[i - 1] ^ a[i];
		}
	}
//	for(int i = 0; i < n; i++)
//		cout << b[i] << " ";
//	cout << endl;
	while(q--)
	{
		int count = 0;
		int type, a1, b1;
		scanf("%d%d%d", &type, &a1, &b1);
		if(type == 1)
		{
			a[a1 - 1] = b1;
			if(a1 == 1)
			{
				b[a1 - 1] = b1;
				for(int i = 1; i < n; i++)
					b[i] = b[i - 1] ^ a[i];
			}
			else
			{
				for(int i = a1 - 1; i < n; i++)
				{
					b[i] = b[i - 1] ^ a[i];
				}
			}
//			for(int i = 0; i < n; i++)
//				cout << b[i] << " ";
//			cout << endl;
		}
		else
		{
//			int size = 2, ans = a[0];
//			if(ans == b)
//				count++;
//			ans = a[0] ^ a[1];
//			for(int i = 1; i <= a1; i++)
//			{
//				for(int j = 0; j < size - 1; j++)
//				{
//					ans = 
//				}
//			}
			int count = 0;
			for(int i = 0; i < a1; i++)
				if(b[i] == b1)
					count++;
			printf("%d\n", count);
		}
	}
}
