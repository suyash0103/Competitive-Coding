#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;

ll a[10000];

int main(){
    ll t;
    cin >> t;
    for(ll a0 = 0; a0 < t; a0++){
        ll n;
        cin >> n;
        ll m = n;
        ll i = 0;
        while(n != 0)
        {
            a[i] = n % 10;
            n = n / 10;
            i++;
        }
        ll count = 0;
        for(ll j = 0; j < i; j++)
        {
        	//cout << 1;
            if(!a[j])
                continue;
            if(m % a[j] == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
