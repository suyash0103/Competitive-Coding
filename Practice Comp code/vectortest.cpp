#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector <int, string> v(3);
	for(int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		v[i].first = 0;
		v[i].second = s;
	}
	cout << v[0].second << " " << v[1].second;
}
