#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

//unordered_map<ll,ll> mp;
//unordered_map<ll,ll> :: iterator it, itr;

ll a[100000];

//int swap(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}

int main()
{
	map<ll,ll> mp;
	map<ll,ll> :: iterator it, itr, test;
	ll n, x;
	scanf("%lld", &n);
	for(ll i = 0; i < n; i++)
	{
		cin >> x;
		mp.insert(make_pair(x, i + 1));
	}
	ll k = 0, count = 0, flag = 0;
	for(it = mp.begin(); it != mp.end(); it++)
	{
		if(it -> first == it -> second)
			continue;
		itr = it;
		advance(it, it -> first);
//		if(it != mp.end() && itr != mp.end())
//			swap(it, itr);
		swap(it, itr);
		count++;
//		for(test = mp.begin(); test != mp.end(); test++)
//			cout << test -> first << " ";
//		cout << endl;
//		int temp = itr -> first;
//		itr -> first = it -> first;
//		it -> first = temp;
	}
	printf("%lld\n", count);
}
