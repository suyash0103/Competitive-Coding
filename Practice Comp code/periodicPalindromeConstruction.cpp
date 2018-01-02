#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, p;
		scanf("%d%d", &n, &p);
		if(p == 1 || p == 2)
		{
			cout << "impossible" << endl;
			continue;
		}
//		else
//		{
//			char s[100001];
//			int l = 0, r = p - 1, count = 0;
//			while(l <= r)
//			{
//				if(count % 2 == 0)
//				{
//					s[l] = 'a';
//					s[r] = 'a';
//					l++;
//					r--;
//					count++;
//				}
//				else
//				{
//					s[l] = 'b';
//					s[r] = 'b';
//					l++;
//					r--;
//					count++;
//				}
//			}
//			int div = n / p;
//			for(int i = 0; i < n; i++)
//			{
//				for(int j = 0; j < p; j++)
//				{
//					cout << s[j];
//				}
//			}
//			cout << endl;
//		}
//		if(p == n)
//		{
//			int flaga = 0, flagb = 0;
//			int l = 0, r = n - 1, count = 0;
//			string s;
//			while(l <= r)
//			{
//				if(count % 2 == 0)
//				{
//					//cout << "suyash";
//					s[l] = 'a';
//					s[r] = 'a';
//					l++;
//					r--;
//					count++;
//					flaga = 1;
//				}
//				else
//				{
//					s[l] = 'b';
//					s[r] = 'b';
//					l++;
//					r--;
//					count++;
//					flagb = 1;
//				}
//			}
//			if(flaga == 0 || flagb == 0)
//			{
//				cout << "impossible" << endl;
//			}
//			else
//			{
//				for(int i = 0; i < n; i++)
//					cout << s[i];
//				cout << endl;
//			}
//		}
		else
		{
			char s[100001];
			if(p != 2)
			{
				int l = 0, r = p - 1, count = 0;
				while(l <= r)
				{
					if(count % 2 == 0)
					{
						s[l] = 'a';
						s[r] = 'a';
						l++;
						r--;
						count++;	
					}
					else
					{
						s[l] = 'b';
						s[r] = 'b';
						l++;
						r--;
						count++;
					}
				}
				int div = n / p;
				for(int i = 0; i < div; i++)
				{
					for(int i = 0; i < p; i++)
						cout << s[i];
				}
				cout << endl;
			}
			else
			{
				cout << "impossible" << endl;
			}
		}
	}
}
