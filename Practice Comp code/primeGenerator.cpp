#include<bits/stdc++.h>
using namespace std;
 
int prime[40000];
vector <long long> Primes;
 
void GenerateSieve()
{
     long long i,j;
 
     for(i=2;i<=32000;i++)
     {
 
         if(prime[i]==0)
         {
             Primes.push_back(i);
 
             for(j=i+i;j<=32000;j+=i)
             {
                 prime[j]=1;
             }
 
         }
 
     }
 
}
 
int main()
{
    GenerateSieve();
 
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long i,j,N,M;
 
        scanf("%lld %lld",&N,&M);
 
        if(N<2)
            N=2;
 
        if(N%2==0)
        {
             if(N==2)
                printf("2\n");
             for(i=N+1;i<=M;i+=2)
             {
                int flag=1;
                for(j=0;j<Primes.size()&&Primes[j]*Primes[j]<=i;j++)
                {
                    if(i%Primes[j]==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    printf("%lld\n",i);
             }
        }
        else
        {
            for(i=N;i<=M;i+=2)
            {
                int flag=1;
                for(j=0;j<Primes.size()&&Primes[j]*Primes[j]<=i;j++)
                {
                    if(i%Primes[j]==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    printf("%lld\n",i);
            }
        }
        printf("\n");
    }
    //cout << Primes.size();
}
