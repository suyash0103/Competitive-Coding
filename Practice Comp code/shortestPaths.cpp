#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define MOD 1000000007

ll dp(ll m, ll n)
{
    ll count[m][n];
    for (ll i = 0; i < m; i++)
        count[i][0] = 1;
    for (ll j = 0; j < n; j++)
        count[0][j] = 1;
    for (ll i = 1; i < m; i++)
        for (ll j = 1; j < n; j++)
            count[i][j] = count[i-1][j] + count[i][j-1]; 
    return (count[m-1][n-1] % MOD);
}

int main()
{
	ll m, n, x, y;
	scanf("%lld%lld%lld%lld", &m, &n, &x, &y);
		ll z = dp(x, y);
		printf("%lld", z % MOD);
}
