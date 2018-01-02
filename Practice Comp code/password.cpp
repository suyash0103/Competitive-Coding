#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	vector <string> v(t);
	string ans;
	while(t--)
	{
		string s;
		cin >> s;
		v.push_back(s);
		string rev;
		reverse(s.begin(), s.end());
		rev = s;
		for(int i = 0; i < v.size(); i++)
		{
			if(rev == v[i])
			{
				ans = v[i];	
			}
		}
	}
	//cout << ans;
	int l = ans.length();
	cout << l << " " << ans[l / 2];
}
