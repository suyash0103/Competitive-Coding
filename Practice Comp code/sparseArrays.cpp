#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string s[n];
	int pos = 0;
	while(n--)
	{
		cin >> s[pos];
		//cout << s[pos];
		pos++;
	}
	int q;
	scanf("%d", &q);
//	for(int j = 0; j < n; j++)
//		cout << s[j] << endl;
	while(q--)
	{
		string s1;
		cin >> s1;
		int count = 0;
		for(int j = 0; j < pos; j++)
		{
			if(s[pos].compare(s1) == 0)       //if(s[j].find(s1) != string :: npos)
			{
				count++;
			}
		}
		cout << count << endl;
	}
}
