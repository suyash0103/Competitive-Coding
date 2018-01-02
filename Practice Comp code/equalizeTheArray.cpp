#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() 
{   
    int n, u;
    cin >> n;
    memset(a, 0, 105);
    for(int i = 0; i < n; i++)
    {
        cin >> u;
        a[u]++;
    }
    int n1 = sizeof(a) / sizeof(a[0]);
    sort(a, a + n1, greater<int>());
    cout << n - a[0];
    return 0;
}
