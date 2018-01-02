#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	long int pt = 0, rt = 0, lt = 0;
	char max = s[0];
	for(long int i = 1; i < s.length(); i++)
	{
		if(max < s[i])
		{
			max = s[i];
			pt = i;
		}
		else if(max == s[i])
		{
			lt = pt + 1;
			rt = i + 1;
			while(1)
			{
				//cout << "Y";
				if(rt == s.length())
					rt = 0;
				if(lt == s.length())
					lt = 0;
				if(s[lt] == s[rt])
				{
					lt++;
					rt++;
				}
				else if(s[lt] < s[rt])
				{
					max = s[i];
					pt = i;
					break;
				}
				else
				{
					break;
				}
			}
		}
	}
	for(long int i = pt; i < s.length(); i++)
		cout << s[i];
	for(long int i = 0; i < pt; i++)
		cout << s[i];
}
