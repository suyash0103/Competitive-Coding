#include<bits/stdc++.h>
 
 
using namespace std;
 
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define elif else if
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
string ss;
int pf[1000005];
int mxp=0;
void kmp(int pos)
{
    int i,k=0;
    pf[0]=0;
    for(i=1;i<ss.size();i++)
    {
        while(k && ss[i]!=ss[k])
        	k=pf[k-1];
        if(ss[i]==ss[k])
        	k++;
        pf[i]=k;
        if(i<=pos) mxp=max(mxp,pf[i]);
    }
}
int main()
{
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{	
	    int i,j,k,pos;
	    cin>>ss>>pos;
	    assert(1<=ss.size() && ss.size()<=1000000);
	    assert(1<=pos && pos<=ss.size());
	        pos--;
	    mxp=0;
	    memset(pf,0,sizeof(pf));
	    kmp(pos);
	    k=pf[ss.size()-1];
	    while(k>mxp  && k) k=pf[k-1];
	    if(k==0) cout<<"Puchi is a cheat!";
	    else for(i=0;i<k;i++) cout<<ss[i];
	    cout<<"\n";
	}
    return 0;
}
