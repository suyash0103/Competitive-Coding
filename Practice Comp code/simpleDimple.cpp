#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int p;
		string s;
		scanf("%d", &p);
		cin >> s;
		int len = s.length();
		int count = 0;
		for(int i = len - 1; i >= 0; i--)
		{
			if(s[i] < 'a' + p)
			{
				if(i != len - 1)
				{
					s[i] = s[i] + 1;
					for(int j = i + 1; j < len; j++)
						s[j] = 'a';
					count++;
					break;
				}
				else
					s[i] = s[i] + 1;
				count++;	
				break;
			}
		}
		if(count)
				cout << s << endl;
		else 
			cout << -1 << endl;
	}
}
