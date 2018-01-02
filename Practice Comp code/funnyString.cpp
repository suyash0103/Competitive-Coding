#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		string rev(s);
		reverse(rev.begin(), rev.end());
		int l = s.length();
		int flag = 0;
		for(int i = 1; i < l; i++)
		{
			if(abs(s[i] - s[i - 1]) != abs(rev[i] - rev[i - 1]))
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout << "Not Funny" << endl;
		else
			cout << "Funny" << endl;
	}
}
