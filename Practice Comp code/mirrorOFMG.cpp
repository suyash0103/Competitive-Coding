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
		string rev;
		rev = s;
		reverse(rev.begin(), rev.end());
		if(s.size() == count(s.begin(), s.end(), '1') + count(s.begin(), s.end(), '0') + count(s.begin(), s.end(), '8') && (rev == s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
