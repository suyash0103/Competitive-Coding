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
		char s1[100000];
		for(int i = 0; i < 100000; i++)
			s1[i] = '\0';
		if(countA == countB)
		{
			for(long int i = 0; i < s.length(); i++)
			{
				if(i % 2 == 0)
					cout << 'a';
				else
					cout << 'b';
			}
			cout << endl;
			continue;
		}
		else if(countA > countB)
		{
			int i;
			for(i = 0; i < x; i++)
				s1[i] = 'a';
			//for(int i = countA; i < countA + countB; i++)
				s1[i] = 'b';
		}
		else
		{
			int i;
			for(i = 0; i < y; i++)
				s1[i] = 'b';
			//for(int i = countA; i < countA + countB; i++)
				s1[i] = 'a';
		}
		//int a = s.length() / (countA + countB);
		//int b = s.length() % (countA + countB);
		while(countA > 0 && countB > 0)
		{
			printf("%s", s1);
			if(countA > countB)
			{
				countA = countA - x;
				countB--;	
			}
			else
			{
				countB = countB - y;
				countA--;
			}
		}
		if(countA > countB)
		{
			char giveA[100000];
			for(int i = 0; i < 100000; i++)
				giveA[i] = '\0';
			for(int i = 0; i < x; i++)
				giveA[i] = 'a';
			int num = 0;
			while(countA > 0)
			{
				if(num % 2 == 0)
				{
					if(countA >= x)
					{
						printf("%s", giveA);
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
			char giveB[100000];
			for(int i = 0; i < 100000; i++)
				giveB[i] = '\0';
			for(int i = 0; i < y; i++)
				giveB[i] = 'b';
			int num = 0;
			while(countB > 0)
			{
				if(num % 2 == 0)
				{
					if(countB >= y)
					{
						printf("%s", giveB);
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
