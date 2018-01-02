#include<iostream>
 
using namespace std;
 
long long C(long long int n, long long int r)
{
    if(r > n / 2) r = n - r;
    long long ans = 1;
    int i;
    for(i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}
 
int main()
{
    int t;
    long long int n, k, ans;
    cin >> t;
    for(int i=0; i < t; i++)
    {
        cin >> n >> k;
        ans = C(n-1, k-1);
        cout << ans << "\n";
    }
    return 0;
} 
