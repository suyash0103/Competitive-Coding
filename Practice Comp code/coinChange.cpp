#include<stdio.h>

using namespace std;
 
int count( int S[], int m, int n )
{
    if (n == 0)
        return 1;
     
    if (n < 0)
        return 0;
 
    if (m <=0 && n >= 1)
        return 0;

    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}
 
int main()
{
    int i, j, m, n;
    int a[51];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; i++)
    	scanf("%d", &a[i]);
    printf("%d ", count(a, m, n));
    getchar();
    return 0;
}
