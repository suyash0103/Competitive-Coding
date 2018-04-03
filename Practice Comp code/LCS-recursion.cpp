#include<bits/stdc++.h>

using namespace std;

int LCS(string s1, int l1, string s2, int l2)
{
	if(l1 < 0 || l2 < 0)
		return 0;

	if(s1[l1 - 1] == s2[l2 - 1])
		return 1 + LCS(s1, l1 - 1, s2, l2 - 1);
		
	else
		return max(LCS(s1, l1 - 1, s2, l2), LCS(s1, l1, s2, l2 - 1));
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int l1 = s1.length();
	int l2 = s2.length();
	int ans = LCS(s1, l1, s2, l2);
	cout << ans;
}
