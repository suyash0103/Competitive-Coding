#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

vector <pair<int, string> > v(1000000);
vector <pair<int, string> > :: iterator itr;
vector <pair<int, string> > cpy(1000000);
vector <pair<int, string> > :: iterator it;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int num;
		string s;
		scanf("%d", &num);
		cin >> s;
		v.push_back(make_pair(num, s));
		cpy.push_back(make_pair(num, s));
	}
	sort(cpy.begin(), cpy.end());
	for(int i = 0; i < n; i++)
	{
		string str = cpy[i].second;
		itr = find(v.begin(), v.end(), str);
		//int pos = find(v.begin(), v.end(), str) - v.begin();
		int pos = 12;
		if(pos >= n / 2)
			cout << str << " ";
		else
			cout << "-" << " ";
	}
}
