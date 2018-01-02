#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int t, x = 1, k = 3, y = 1;
    scanf("%lld", &t);
    while((x + k) <= t)
    {
    	cout << x << endl;
    	x = x + k;
    	k = k * 2;
        //y++;
    }
    long long int diff, ans;
    diff = t - x;
    ans = x + 2 - diff;
    //cout << x << endl;
    printf("%lld", ans);
    return 0;
}
