#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;

for (int k = 0; k < t; k++)
{
long long int n;
scanf("%lld", &n);

long long int c = 0;
while (n >= 5)
{
n /= 5;
c += n;
}

printf("%lld\n", c);
}

return 0;
}
