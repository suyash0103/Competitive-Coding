#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int arr[100000];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		int pos = 0;
		if(n < 10)
		{
			cout << n + 10 << endl;
			continue;
		}
		for(int i = 9; i > 1; i--)
		{
			while(n % i == 0)
			{
				arr[pos] = i;
				pos++;
				n = n / i;
			}
		}
		if(n > 10)
			cout << -1 << endl;
		else
		{
			for(int i = pos - 1; i >= 0; i--)
				cout << arr[i];
			cout << endl;
		}
	}
}
