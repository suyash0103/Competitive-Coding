#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cmath>

#define MAX 1000005

using namespace std;

vector <int> divisors[MAX];

int main()
{
    int A, B;
    long long ans = 0;

    cin >> A >> B;
    
    int sqrtB = (int)sqrt(B);
    for ( int i = 1; i <= sqrtB; i++ ) {
        for ( int j = i; j <= B; j += i ) {
            divisors[j].push_back(i);
            if ( j/i > sqrtB  ) divisors[j].push_back(j/i);
        }
    }

    for ( int y = 1; y <= B; y++ ) {
        for ( int j = 0; j < (int)divisors[y].size(); j++ ) {
            int k_plus_x = divisors[y][j], k_minus_x = y/divisors[y][j];
            if ( k_plus_x >= k_minus_x ) {
                if ( (k_plus_x + k_minus_x)%2 == 0 && (k_plus_x - k_minus_x)%2 == 0 ) {
                    int k = (k_plus_x + k_minus_x)/2;
                    int x = (k_plus_x - k_minus_x)/2;
                    if ( x >= 1 && x <= A ) ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
