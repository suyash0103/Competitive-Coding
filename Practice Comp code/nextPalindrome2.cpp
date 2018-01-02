#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		string s;
		cin >> s;
		int l = s.length();
		int noOfNine = 0;
		for(int i = 0; i < l; i++)
			if(s[i] == '9')
				noOfNine++;
		if(noOfNine == l)
		{
			printf("1");
			for(int i = 0; i < l; i++)
				printf("0");
			printf("1\n");
			continue;
		}
		int lp = 0;
		int rp = l - 1;
		if(l % 2 == 1)
		{
			while(lp < rp - 2)
			{
				s[rp] = s[lp];
				lp++;
				rp--;
			}
			if(int(s[lp]) > int(s[rp]))
				s[rp] = s[lp];
			else
			{
				s[rp] = s[lp];
				lp++;
				char x = s[lp];
				if(x != '9')
				{
					x++;
					s[lp] = x;	
				}
				else
				{
					//x = '0';
					//s[lp] = x;
					lp--;
					while(s[lp] == '9')
					{
						char x = s[lp];
						x = '0';
						s[lp] = x;
						s[rp] = x;
						lp--;
						rp++;
					}
					s[lp]++;
					s[rp]++;
				}
			}
			cout << s << endl;
		}
		else
		{
			while(lp <= rp - 3)
			{
				s[rp] = s[lp];
				lp++;
				rp--;
			}
			char x = (s[lp]);
			char y = (s[rp]);
			if(int(x) > int(y))
			{
				s[rp] = s[lp];
				cout << s << endl;
			}
			else
			{
//				x++;
//				s[lp] = x;
//				s[rp] = x;
//				cout << s << endl;
				if(x != '9')
				{
					x++;
					s[lp] = x;	
				}
				else
				{
					while(s[lp] == '9')
					{
						char x = s[lp];
						x = '0';
						s[lp] = x;
						s[rp] = x;
						lp--;
						rp++;
					}
					s[lp]++;
					s[rp]++;
				}
				cout << s << endl;
			}
		}
	}
}
