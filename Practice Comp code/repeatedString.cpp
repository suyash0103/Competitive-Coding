#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	string s;
	cin >> s;
	ll count = 0;
	for(int i = 0; i < s.length(); i++)
		if(s[i] == 'a')
			count++;
	ll n;
	scanf("%lld", &n);
	ll l = s.length();
	ll x = n / l;
	count = count * x;
	ll y = n % l;
	for(int i = 0; i < y; i++)
		if(s[i] == 'a')
			count++;
	printf("%lld", count);
}
