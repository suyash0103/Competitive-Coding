#include<bits/stdc++.h>
using namespace std;
#define vi vector < int >
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define foreach(it,v) for( __typeof((v).begin())it = (v).begin() ; it != (v).end() ; it++ )
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define all(x) x.begin(),x.end()
#define mset(x,v) memset(x, v, sizeof(x))
#define sz(x) (int)x.size()
bool isPalin(string s)
{
    int l = 0 , r = sz(s) - 1;
    while(l < r && s[l] == s[r])
    {
        l++,r--;
    }
    return (l == r);
}
bool allSame(string s)
{
    int i;
    for(i=1;i<sz(s);i++)
    {
        if(s[i] != s[i-1])
            return 0;
    }
    return 1;
}
int main()
{
    string s;
    cin>>s;
    assert(1 <= sz(s) && sz(s) <= 100000);
    int ans;
    if(allSame(s))
        ans = 0;
    else if(isPalin(s))
        ans = sz(s) - 1;
    else
        ans = sz(s);
    printf("%d\n",ans);
    return 0;
}

