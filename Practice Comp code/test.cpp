#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m, count = 0;
		scanf("%d%d", &n, &m);
		if(m % 2 == 0)
		{
			for(int i = 0; i < n; i++)
			{
				string s;
				cin >> s;
				for(int j = 0; j < m - 2; j++)
				{
					if(s[j] == s[j + 1] && j - 1 < 0)
					{
						if(s[j] == s[j + 2])
						{
							if(s[j + 1] == 'R')
							{
								count+= 5;
								s[j + 1] = 'G';
							}
							else
							{
								count += 3;
								s[j + 1] = 'R';
							}
						}
						else
						{
							if(s[j] == 'R')
							{
								count+= 5;
								s[j] = 'G';
							}
							else
							{
								count += 3;
								s[j] = 'R';
							}
						}
					}
					else if(s[j] == s[j + 1] && j - 1 >= 0)
					{
						if(s[j] == s[j + 1])
						{
							if(s[j + 1] == 'R')
							{
								count += 5;
								s[j + 1] = 'G';
							}
							else
							{
								count += 3;
								s[j + 1] = 'R';
							}
						}
					}
				}
				int j = m - 2;
				if(s[j] == s[j + 1])
				{
					if(s[j + 1] == 'R')
					{
						count += 5;
						s[j + 1] = 'G';
					}
					else
					{
						count += 3;
						s[j + 1] = 'R';
					}
				}
				cout << s << endl;
			}	
		}
		else
		{
			for(int i = 0; i < n; i++)
			{
				string s;
				cin >> s;
				for(int j = 1; j < m - 2; j++)
				{
					if(s[j] == s[j + 1] && j - 1 < 0)
					{
						if(s[j] == s[j + 2])
						{
							if(s[j + 1] == 'R')
							{
								count+= 5;
								s[j + 1] = 'G';
							}
							else
							{
								count += 3;
								s[j + 1] = 'R';
							}
						}
						else
						{
							if(s[j] == 'R')
							{
								count+= 5;
								s[j] = 'G';
							}
							else
							{
								count += 3;
								s[j] = 'R';
							}
						}
					}
					else if(s[j] == s[j + 1] && j - 1 >= 0)
					{
						if(s[j] == s[j + 1])
						{
							if(s[j + 1] == 'R')
							{
								count += 5;
								s[j + 1] = 'G';
							}
							else
							{
								count += 3;
								s[j + 1] = 'R';
							}
						}
					}
				}
				int j = m - 2;
				if(s[j] == s[j + 1])
				{
					if(s[j + 1] == 'R')
					{
						count += 5;
						s[j + 1] = 'G';
					}
					else
					{
						count += 3;
						s[j + 1] = 'R';
					}
				}
				if(s[0] == s[1])
				{
					if(s[0] == 'R')
					{
						count += 5;
						s[0] = 'G';
					}
					else
					{
						count += 3;
						s[0] = 'R';
					}
				}
				cout << s << endl;
			}
		}
		printf("%d\n", count);
	}
}
