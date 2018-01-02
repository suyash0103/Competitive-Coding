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
		long int x, y;
		scanf("%ld%ld", &x, &y);
//		if(x == 1 && y == 1)
//		{
//			int countA = 0, countB = 0;
//			for(int i = 0; i < s.length(); i++)
//			{
//				if(s[i] == 'a')
//					countA++;
//				else
//					countB++;	
//			}
//			if(countA == countB)
//			{
//				for(int i = 0; i < s.length(); i++)
//				{
//					if(i % 2 == 0)
//						cout << 'a';
//					else
//						cout << 'b';
//				}
//			}
//			else if(countA > countB)
//			{
//				for(int i = 0; i < 2 * countB; i++)
//				{
//					if(i % 2 == 0)
//						cout << 'a';
//					else
//						cout << 'b';
//				}
//				countA = countA - countB;
//				int x = 0;
//				while(countA)
//				{
//					if(x % 2 == 0)
//					{
//						cout << 'a';
//						countA--;
//					}
//					else
//						cout << '*';
//					x++;
//				}
//			}
//			else
//			{
//				for(int i = 0; i < 2 * countA; i++)
//				{
//					if(i % 2 == 0)
//						cout << 'b';
//					else
//						cout << 'a';
//				}
//				countB = countB - countA;
//				int x = 0;
//				while(countB)
//				{
//					if(x % 2 == 0)
//					{
//						cout << 'b';
//						countB--;
//					}
//					else
//						cout << '*';
//					x++;
//				}
//			}
//			cout << endl;
//		}
		//else
		//{
			long int countA = 0, countB = 0;
			for(long int i = 0; i < s.length(); i++)
			{
				if(s[i] == 'a')
					countA++;
				else
					countB++;	
			}
			if(countA == countB)
			{
				for(long int i = 0; i < s.length(); i++)
				{
					if(i % 2 == 0)
						cout << 'a';
					else
						cout << 'b';
				}
			}
			else if(countA > countB)
			{
				for(long int i = 0; i < 2 * countB; i++)
				{
					if(i % 2 == 0)
						cout << 'a';
					else
						cout << 'b';
				}
				countA = countA - countB;
				char s1[100000];
				for(long int i = 0; i < 100000; i++)
					s1[i] = '\0';
				for(long int i = 0; i < x; i++)
					s1[i] = 'a';
				long int num = 0;
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
							for(long int i = 0; i < countA; i++)
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
				for(long int i = 0; i < 2 * countA; i++)
				{
					if(i % 2 == 0)
						cout << 'b';
					else
						cout << 'a';
				}
				countB = countB - countA;
				char s1[100000];
				for(int i = 0; i < 100000; i++)
					s1[i] = '\0';
				for(int i = 0; i < y; i++)
					s1[i] = 'b';
				long int num = 0;
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
							for(long int i = 0; i < countB; i++)
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
		//}
	}
}
