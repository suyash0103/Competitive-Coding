#include<bits/stdc++.h>

using namespace std;


int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i,j;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            char a[n][n];
            for(i=0;i<n;i++){
                    for(j=0;j<n;j++)
                            cin>>a[i][j];
                    sort(a[i],a[i]+n);
            }
            int flag=1;
            for(i=0;i<n-1;i++){
                    for(j=0;j<n;j++){
                            if(a[i][j]>a[i+1][j]){
                                    flag=0;
                                    break;
                            }

                    }
            }                
            if(flag==1)
                    cout<<"YES"<<endl;
            else
                    cout<<"NO"<<endl;       
    }


return 0;
}
