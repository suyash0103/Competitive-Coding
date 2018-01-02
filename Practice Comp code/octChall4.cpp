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
		int a = 0, b = 0;
		char s1[100000], s2[100000];
		for(int i = 0; i < 100000; i++)
		{
			s1[i] = '\0';
			s2[i] = '\0';
		}
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == 'a')
				a++;
			else
				b++;
		}
		if(a >= x && b >= y)
		{
			if(a >= b)
			{
				for(int i = 0; i < x; i++)
					s1[i] = 'a';
				for(int i = 0; i < y; i++)
					s2[i] = 'b';
				int num = 0;
				while(a >= x && b >= y)
				{
					printf("%s", s1);
					printf("%s", s2);
					a -= x;
					b -= y;
				}
//				while(a > 0)
//				{
//					cout << 'a';
//					a--;
//				}
//				while(b > 0)
//				{
//					cout << 'b';
//					b--;
//				}
				num = 0;
				while(a > 0)
				{
					if(num % 2 == 0)
					{
						if(a >= x)
						{
							printf("%s", s1);
							a -= x;
						}
						else
						{
							for(int i = 0; i < a; i++)
								cout << 'a';
							a -= x;
						}
					}
					else
					{
						if(b > 0)
						{
							cout << 'b';
							b--;
						}
						else
							cout << '*';
					}
					num++;
				}
			}
			else
			{
				for(int i = 0; i < y; i++)
					s2[i] = 'b';
				for(int i = 0; i < x; i++)
					s1[i] = 'a';
				int num = 0;
				while(b >= y && a >= x)
				{
					printf("%s", s2);
					printf("%s", s1);
					a -= x;
					b -= y;
				}
//				while(b > 0)
//				{
//					cout << 'b';
//					b--;
//				}
//				while(a > 0)
//				{
//					cout << 'a';
//					a--;
//				}
				num = 0;
				while(b > 0)
				{
					if(num % 2 == 0)
					{
						if(b >= y)
						{
							printf("%s", s2);
							b -= y;
						}
						else
						{
							for(int i = 0; i < b; i++)
								cout << 'b';
							b -= y;
						}
					}
					else
					{
						if(a > 0)
						{
							cout << 'a';
							a--;
						}
						else
							cout << '*';
					}
					num++;
				}
			}
		}
		else if(a < x && b < y)
			cout << s;
		else if(a < x && b >= y)
		{
			for(int i = 0; i < y; i++)
			{
				s1[i] = 'b';
				s2[i] = 'b';
			}
			s1[y] = 'a';
			while(b >= y && a > 0)
			{
				printf("%s", s1);
				a--;
				b -= y;
			}
//			while(b > 0)
//			{
//				cout << 'b';
//				b--;
//			}
//			while(a > 0)
//			{
//				cout << 'a';
//				a--;
//			}
			int num = 0;
			while(b > 0)
			{
				if(num % 2 == 0)
				{
					if(b >= y)
					{
						printf("%s", s2);
						b -= y;
					}
					else
					{
						for(int i = 0; i < b; i++)
							cout << 'b';
						b -= y;
					}
				}
				else
				{
					if(a > 0)
					{
						cout << 'a';
						a--;
					}
					else
						cout << '*';
				}
				num++;
			}
		}
		else if(a >= x && b < y)
		{
			for(int i = 0; i < x; i++)
			{
				s1[i] = 'a';
				s2[i] = 'a';
			}
			s1[x] = 'b';
			while(a >= x && b > 0)
			{
				printf("%s", s1);
				a -= x;
				b--;
			}
//			while(a > 0)
//			{
//				cout << 'a';
//				a--;
//			}
//			while(b > 0)
//			{
//				cout << 'b';
//				b--;
//			}
			int num = 0;
			while(a > 0)
			{
				if(num % 2 == 0)
				{
					if(a >= x)
					{
						printf("%s", s2);
						a -= x;
					}
					else
					{
						for(int i = 0; i < a; i++)
							cout << 'a';
						a -= x;
					}
				}
				else
				{
					if(b > 0)
					{
						cout << 'b';
						b--;
					}
					else
						cout << '*';
				}
				num++;
			}
		}
		cout << endl;
	}
}
