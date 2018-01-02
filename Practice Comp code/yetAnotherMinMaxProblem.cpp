#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int a[10000];

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int max = a[0] ^ a[1];
	for(int i = 0; i < n - 1; i++)
		//if(a[i] ^ a[i + 1] > max)
		//	max = a[i] ^ a[i + 1];
		cout << (a[i]) ^ (a[i + 1]);
	//cout << max;
}
