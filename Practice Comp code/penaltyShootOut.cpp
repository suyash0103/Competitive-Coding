#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		int a = 0, b = 0, ans, turnsa = 5, turnsb = 5, flag = 0;
		for(int i = 0; i < 10; i++)
		{
			if(i % 2 == 0 && s[i] == '1')
			{
				a++;
			}
			if(i % 2 == 1 && s[i] == '1')
			{
				b++;
			}
			if(i % 2 == 0)
				turnsa--;
			if(i % 2 == 1)
				turnsb--;
			if(a > b)
			{
				if(a - b > turnsb)
				{
					ans = i + 1;
					flag = 2;
					break;
				}
			}
			else
			{
				if(b - a > turnsa)
				{
					ans = i + 1;
					flag = 2;
					break;
				}
			}
		}
		if(flag == 2)
		{
			if(a > b)
			{
				printf("TEAM-A %d\n", ans);
			}
			else
			{
				printf("TEAM-B %d\n", ans);
			}
		}
		else
		{
			if(a > b)
			{
				printf("TEAM-A 10\n");
			}
			else if(b > a)
			{
				printf("TEAM-B 10\n");
			}
			else if(a == b)
			{
				int ans, flag2 = 0, win, a1 = 0, b1 = 0;
				for(int i = 10; i < 20; i++)
				{
					if(i % 2 == 0 && s[i] == '1')
					{
						a1++;
					}
					if(i % 2 == 1 && s[i] == '1')
					{
						b1++;
					}
					if(i % 2 == 1)
					{
						if(a1 > b1)
						{
							ans = i + 1;
							flag2 = 1;
							win = 0;
							break;
						}
						else if(b1 > a1)
						{
							ans = i + 1;
							flag2 = 1;
							win = 1;
							break;
						}
					}
				}
				if(flag2 == 0)
				{
					printf("TIE\n");
				}
				else
				{
					if(win == 0)
					{
						printf("TEAM-A %d\n", ans);
					}
					else
					{
						printf("TEAM-B %d\n", ans);
					}
				}
			}
		}
	}
}
