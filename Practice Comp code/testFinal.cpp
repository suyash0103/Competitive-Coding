#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100005], b[100005], c[100005];

int main()
{
	int n, k;
	cin >> n >> k;
	vector <int> vec(k);
	for(int i = 0; i < k; i++)
		vec[i] = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		int rem = a[i] % k;
		vec[rem]++;
	}
	int ans = 0;
	if(k % 2 != 0)
	{
		for(int i = 1; i <= k / 2; i++)
		{
			ans += max(vec[i], vec[k - i]);
		}
		if(vec[0] > 0)
			ans++;
		cout << ans;
	}
	else
	{
		for(int i = 1; i < k / 2; i++)
		{
			ans += max(vec[i], vec[k - i]);
		}
		if(vec[k / 2] > 0)
			ans++;
		if(vec[0] > 0)
			ans++;
		cout << ans;
	}
}
