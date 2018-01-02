#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, a;
		cin >> n >> a;
		if(a == 1)
		{
			printf("%d ", n);
			for(int i = 0; i < n; i++)
				cout << "a";
			cout << endl;
		}
		else if(a == 2)
		{
			if(n == 1)
			{
				cout << "1 a" << endl;
				continue;
			}
			else if(n == 2)
			{
				cout << "1 ab" << endl;
				continue;
			}
			else if(n == 3)
			{
				cout << "2 aab" << endl;
				continue;
			}
			else if(n == 4)
			{
				cout << "2 aabb" << endl;
				continue;
			}
			else if(n == 5)
			{
				cout << "3 aaabb" << endl;
				continue;
			}
			else if(n == 6)
			{
				cout << "3 aababb" << endl;
				continue;
			}
			else if(n == 7)
			{
				cout << "3 aaababb" << endl;
				continue;
			}
			else if(n == 8)
			{
				cout << "3 aaababbb" << endl;
				continue;
			}
			else if(n == 9)
			{
				cout << "4 aaaababbb" << endl;
				continue;
			}
			else if(n == 10)
			{
				cout << "4 aaaababbbb" << endl;
				continue;
			}
			else if(n == 11)
			{
				cout << "4 abbaababbaa" << endl;
			}
			else if(n == 12)
			{
				cout << "4 abbaababbaab" << endl;
			}
			else
			{
				cout << "4 ";
				string s1 = "abba";
				string s2 = "abab";
				string s3 = "baab";
				int div = n / 4;
				int mod = n % 4;
				for(int i = 1; i <= div; i++)
				{
					if(i % 3 == 1)
						cout << s1;
					else if(i % 3 == 2)
						cout << s2;
					else if(i % 3 == 0)
						cout << s3;
				}
				if(div % 3 == 0)
				{
					if(mod == 1)
						cout << "a";
					else if(mod == 2)
						cout << "ab";
					else if(mod == 3)
						cout << "abb";
					cout << endl;	
				}
				else if(div % 3 == 1)
				{
					if(mod == 1)
						cout << "a";
					else if(mod == 2)
						cout << "ab";
					else if(mod == 3)
						cout << "aba";
					cout << endl;
				}
				else if(div % 3 == 2)
				{
					if(mod == 1)
						cout << "b";
					else if(mod == 2)
						cout << "ba";
					else if(mod == 3)
						cout << "baa";
					cout << endl;
				}
			}
		}
		else
		{
			cout << "1 ";
			char s[100];
			char c = 'a';
			for(int i = 0; i < a; i++)
			{
				s[i] = c;
				c++;
 			}
			int div = n / a;
			int mod = n % a;
			for(int i = 0; i < div; i++)
			{
				for(int j = 0; j < a; j++)
					cout << s[j];
			}
			c = 'a';
			for(int i = 0; i < mod; i++)
			{
				cout << c;
				c++;
			}
			cout << endl;
		}
	}
}
