#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;
		int count = 0;
		int a[100000];
		for(int i = 0; i < 100000; i++)
			a[i] = 0;
		for(int i = 0; i < s.length(); i++)
		{
			a[int(s[i])]++;
			if(a[int(s[i])] > 1)
				count = 1;
		}
		if(count)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}
