#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		string finalAns;
		int posOfFinal = 0;
		string s;
		cin >> s;
		int a, b;
		scanf("%d%d", &a, &b);
		int countA = 0, countB = 0;
		printf("%c", s[0]);
		if(s[0] == 'a')
			countA++;
		else
			countB++;
		for(int i = 1; i < s.length(); i++)
		{
			if(s[i] == 'a' && countA == a)
			{
				if(s[i] == s[i + 1] && i < s.length() - 1)
				{
					printf("*");
					printf("%c", s[i]);
//					finalAns[posOfFinal] = '*';
//					posOfFinal++;
//					finalAns[posOfFinal] = s[i];
//					posOfFinal++;
					countA = 1;
				}
				else if(i == s.length() - 1)
				{
					printf("*");
					printf("%c", s[i]);
				}
				else
				{
					char temp = s[i];
					s[i] = s[i + 1];
					s[i + 1] = temp;
					countB = 1;
					countA = 0;
					printf("%c", s[i]);
				}
			}
			else if(s[i] == 'b' && countB == b)
			{
				if(i < s.length() - 1 && s[i] == s[i + 1])
				{
					//cout << "he";
					printf("*");
					printf("%c", s[i]);
					countB = 1;
				}
				else if(i == s.length() - 1)
				{
					//cout << "h";
					printf("*");
					printf("%c", s[i]);
				}
				else
				{
					char temp = s[i];
					s[i] = s[i + 1];
					s[i + 1] = temp;
					countA = 1;
					countB = 0;
					printf("%c", s[i]);
				}
			}
			else
			{
				printf("%c", s[i]);
				if(s[i] == 'a')
				{
					countA++;
					countB = 0;
				}
				else
				{
					countB++;
					countA = 0;	
				}
			}
		}
		cout << endl;
	}
}
