#include <bits/stdc++.h>
using namespace std;
#define ll long long 
long long mod=1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ans=0,k=0,co=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='$'||s[i]=='&')
            {
                ans+=(s.length()-i)*(co);
                ans+=(s.length()-i);
                co=0;
            }
            else
            {
                co++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
