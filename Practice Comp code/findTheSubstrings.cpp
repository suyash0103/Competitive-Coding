#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int a = 0, b = 0, c = 0;
		string s;
		cin >> s;
		long int l = s.length();
		long int ans = l * (l + 1) / 2;
		for(long int i = 0; i < l; i++)
		{
			if(s[i] == 'a')
			{
				a = i + 1;
				ans -= min(b, c);
			}
			else if(s[i] == 'b')
			{
				b = i + 1;
				ans -= min(a, c);
			}
			else
			{
				c = i + 1;
				ans -= min(a, b);
			}
		}
		cout << ans << endl;
	}
}
