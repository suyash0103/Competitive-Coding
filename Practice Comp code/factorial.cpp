#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int testcases,i,input,zeroes,c;
    cin>>testcases;
        for(i=0;i<testcases;i++)
    {
        zeroes=0;
        cin>>input;
        c=5;
        while((input/c)>0)
        {
            zeroes=zeroes+(input/c);
            c=c*5; 
        }
        cout<<zeroes<<"\n";
    }
 
}
