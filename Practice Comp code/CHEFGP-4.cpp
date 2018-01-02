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
		int x, y;
		scanf("%d%d", &x, &y);
		int countA = 0, countB = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == 'a')
				countA++;
			else
				countB++;
		}
		while(1)
		{
			if(countA <= 0 && countB <= 0)
				break;
			if(countA > 0 && countB > 0)
			{
				if(countA >= countB)
				{
					for(int i = 0; i < x; i++)
					{
						if(countA > 0)
						{
							cout << 'a';
							countA--;
						}
						else	
							break;
					}
					for(int i = 0; i < y; i++)
					{			
						if(countB > 0)
						{
							cout << 'b';
							countB--;
						}
						else
							break;
					}
				}
				else
				{
					for(int i = 0; i < y; i++)
					{		
						if(countB > 0)
						{
							cout << 'b';
							countB--;
						}
						else
							break;
					}
					for(int i = 0; i < x; i++)
					{
						if(countA > 0)
						{
							cout << 'a';
							countA--;
						}
						else	
							break;
					}
				}
			}			
			else if(countB <= 0)
			{
				int num = 0;
				char s1[100000];
				for(int i = 0; i < 100000; i++)
					s1[i] = '\0';
				for(int i = 0; i < x; i++)
					s1[i] = 'a';
				while(countA > 0)
				{
					if(num % 2 == 0)
					{
						if(countA >= x)
						{
							printf("%s", s1);
						}
						else
						{
							for(int i = 0; i < countA; i++)
								cout << 'a';
						}
						countA = countA - x;
					}
					else
						cout << '*';
					num++;
				}
			}
			else
			{
				int num = 0;
				char s1[100000];
				for(int i = 0; i < 100000; i++)
					s1[i] = '\0';
				for(int i = 0; i < x; i++)
					s1[i] = 'b';
				while(countB > 0)
				{
					if(num % 2 == 0)
					{
						if(countB >= y)
						{
							printf("%s", s1);
						}
						else
						{
							for(int i = 0; i < countB; i++)
								cout << 'b';
						}
						countB = countB - y;
					}
					else
						cout << '*';
					num++;
				}
			}
		}
		cout << endl;
	}
}
