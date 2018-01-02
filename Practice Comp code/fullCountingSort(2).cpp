#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

//int a[1000000];

int main()
{
	ll n;
	scanf("%lld", &n);
	string final[n];
	for(ll i = 0; i < n / 2; i++)
	{
		int num;
		scanf("%d", &num);
		string s;
		cin >> s;
		final[num] = final[num] + "-" + " ";
	}
	for(ll i = n / 2; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		string s;
		cin >> s;
		final[num] = final[num] + s + " ";
	}
	for(ll i = 0; i < n; i++)
		cout << final[i];
}
