#include<bits/stdc++.h>

using namespace std;

//int func(string s, int i)
//{
//	if()
//}

int main()
{
	int n;
	cin >> n;
	string s1 = "";
	for(int i = 0; i <= 1000; i++)
		s1 = s1 + to_string(i);
	//cout << s1;
	while(n--)
	{
		string s;
		cin >> s;
		if (s.length() == 1)
		{
			cout << "NO" << endl;
			continue;
		}
		else if (s.length() == 2)
		{
			if (s[0] == s[1] - 1)
			{
				cout << "YES" << " " << s[0] << endl;
				continue;
			}
			else
			{
				cout << "NO" << endl;
				continue;
			}
		}
		size_t find;
		//for(int i = 0; i < n; i++)
		//{
			find = s1.find(s);
		//}
		if(find != string::npos)
		{
			cout << "YES" << " ";
			
		}
		else
			printf("NO\n");
	}
}
