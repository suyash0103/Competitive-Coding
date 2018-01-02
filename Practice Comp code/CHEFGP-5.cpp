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
		char s1[100000], s2[100000];
		for(int i = 0; i < 100000; i++)
		{
			s1[i] = '\0';
			s2[i] = '\0';
		}
		for(int i = 0; i < x; i++)
			s1[i] = 'a';
		for(int i = 0; i < y; i++)
			s2[i] = 'b';
		int numA = countA / x;
		int numB = countB / y;
		int remA = countA % x;
		int remB = countB % y;
		if(numA >= numB)
		{
			int num = 0;
			for(int i = 0; i < 2 * numB; i++)
			{
				if(num % 2 == 0)
				{
					printf("%s", s1);
					countA = countA - x;
				}
				else
					printf("%s", s2);
				num++;
			}
			num = 0;
			if(remB > 0)
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
				if(remB > 0)
				{
					for(int i = 0; i < remB; i++)
						cout << 'b';
				}
				else
					cout << '*';
			}
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
		else if(numB > numA)
		{
			int num = 0;
			for(int i = 0; i < 2 * numA; i++)
			{
				if(num % 2 == 0)
				{
					printf("%s", s2);
					countB = countB - y;
				}
				else
					printf("%s", s1);
				num++;
			}
			if(remA > 0)
			{
				if(countB >= y)
				{
					printf("%s", s2);
				}
				else
				{
					for(int i = 0; i < countB; i++)
						cout << 'b';
				}
				countB = countB - y;
				if(remA > 0)
				{
					for(int i = 0; i < remA; i++)
						cout << 'a';	
				}
				else
					cout << '*';
			}
			num = 0;
			while(countB > 0)
			{
				if(num % 2 == 0)
				{
					if(countB >= y)
					{
						printf("%s", s2);
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
		cout << endl;
	}
}
