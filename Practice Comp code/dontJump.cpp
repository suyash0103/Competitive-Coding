#include<stack>
#include<string>
#include<stdio.h>
#include<sstream>
#include<iostream>
#define read(x) scanf("%d",&x)
using namespace std;
int i, N, ptr, len, A[101];
int main()
{
    //clock_t startTime = clock();
	//freopen("C:/Users/Saurabh Vats/Desktop/HE March Challenge problems/Please don't jump/test cases/in9.txt","r",stdin);
	//freopen("C:/Users/Saurabh Vats/Desktop/HE March Challenge problems/Please don't jump/test cases/out9.txt","w",stdout);
    string S;
    while(read(N)!=EOF)
    {
        len=0, ptr=1;
        int flag=1;
        string ans="";
        stack<int> st;
        getchar();
        getline(cin,S);
        stringstream s2(S);
        while(s2>>i) A[len++]=i;
        if(len) ans="";
        for(i=0; i<len  && flag && ptr<=N+1;)
        {
            if(st.empty() || A[i]>st.top())
            {
                if(ptr<=A[i])  st.push(ptr++), ans+='C';
                else flag=0;
            }
            else if(A[i]<=st.top())
            {
                if(st.top()==A[i]) i++;
                st.pop(), ans+='K';
            }
        }
        if(i!=len) flag=0;
        if(flag)printf("%s\n",ans.c_str());
        else puts("-1");
    }
    //clock_t endTime = clock();
    //fprintf(stderr, "\nTime: %.5f seconds\n", double(endTime - startTime) / CLOCKS_PER_SEC);
    return 0;
}

