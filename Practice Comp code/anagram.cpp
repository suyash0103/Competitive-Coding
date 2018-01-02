#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		//string s1, s2;
	//cin >> s1 >> s2;
		string s;
		cin >> s;
		if(s.length() % 2 == 1)
		{
			cout << -1 << endl;
			continue;
		}
//		for(int i = 0; i < s.length() / 2; i++)
//			s1[i] = s[i];
//		for(int i = 0; i < s.length() / 2; i++)
//			s2[i] = s[s.length() / 2 + i];
//	int l1 = s1.length();
//	int l2 = s2.length();
//	int a[26], b[26];
//	memset(a, 0, sizeof(a));
//	memset(b, 0, sizeof(b));
//	for(int i = 0; i < l1; i++)
//		a[int(s1[i]) - 97]++;
//	for(int i = 0; i < l2; i++)
//		b[int(s2[i]) - 97]++;
//	int i = 0, j = 0;
//	int count = 0;
//	while(i < 26)
//	{
//		//cout << a[i] << " " << b[i] << endl;
//		count = count + abs(a[i] - b[i]);
//		i++;
//	}
//	cout << count;
		//cout << s1 << " " << s2;
		//cout << s.length();
		int count = 0, flag = 0;
		for(int i = 0; i < s.length() / 2; i++)
		{
			for(int j = s.length() / 2; j < s.length(); j++)
			{
				if(s[i] == s[j])
					flag = 1;
			}
			if(flag == 0)
				count++;
			flag = 0;
		}
		cout << count << endl;
	}
}
