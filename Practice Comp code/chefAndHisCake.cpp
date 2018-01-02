#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		char s1[101][101];
		char s2[101][101];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(i % 2 == 0)
				{
					if(j % 2 == 0)
					{
						s1[i][j] = 'R';
						s2[i][j] = 'G';
					}
					else
					{
						s1[i][j] = 'G';
						s2[i][j] = 'R';
					}
				}
				else
				{
					if(j % 2 == 0)
					{
						s1[i][j] = 'G';
						s2[i][j] = 'R';
					}
					else
					{
						s1[i][j] = 'R';
						s2[i][j] = 'G';
					}
				}
			}
		}
		//cout << s1 << endl << s2 << endl;
		int count1 = 0, count2 = 0, count = 0;
//		for(int i = 0; i < n; i++)
//		{
//			string s;
//			cin >> s;
//			for(int j = 0; j < m; j++)
//			{
//				if(s[j] != s1[j])
//				{
//					if(s[j] == 'R')
//						count1 += 5;
//					else
//						count1 += 3;
//				}
//				if(s[j] != s2[j])
//				{
//					if(s[j] == 'R')
//						count2 += 5;
//					else
//						count2 += 3;
//				}
//			}
//			count += min(count1, count2);
//			count1 = 0;
//			count2 = 0;
//		}
		char s[101][101];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> s[i][j];
			}
		}
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < m; j++)
//			{
//				cout << s[i][j];
//			}
//			cout << endl;
//		}
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < m; j++)
//			{
//				cout << s1[i][j];
//			}
//			cout << endl;
//		}
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < m; j++)
//			{
//				cout << s2[i][j];
//			}
//			cout << endl;
//		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(s[i][j] != s1[i][j])
				{
					if(s[i][j] == 'R')
						count1 += 5;
					else
						count1 += 3;
				}
				if(s[i][j] != s2[i][j])
				{
					if(s[i][j] == 'R')
						count2 += 5;
					else
						count2 += 3;
				}
			}
		}
		printf("%d\n", min(count1, count2));
//		printf("%d\n", count);
	}
}
