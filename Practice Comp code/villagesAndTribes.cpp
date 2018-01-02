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
		int a = 0, b = 0;
		char curr = 'c';
		int pos = -1;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == 'A' && curr == 'a')
			{
				a = a + (i - pos);
				pos = i;
			}
			else if(s[i] == 'B' && curr == 'b')
			{
				b = b + (i - pos);
				pos = i;
			}
			else if(s[i] == 'A')
			{
				curr = 'a';
				a++;
				pos = i;
			}
			else if(s[i] == 'B')
			{
				curr = 'b';
				b++;
				pos = i;
			}
		}
		cout << a << " " << b << endl;
	}
}
