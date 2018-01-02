#include <iostream>
using namespace std;

int main()
{
    char s[100005];
    gets(s);
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    if(s[n1 - 1] >= 'a' && s[n1 - 1] <= 'z')
        s[n1 - 1] -= 32;
    else if(s[n1 - 1] >= 'A' && s[n1 - 1] <= 'Z')
        s[n1 - 1] += 32;
    if(s[n2 - 1] >= 'a' && s[n2 - 1] <= 'z')
        s[n2 - 1] -= 32;
    else if(s[n2 - 1] >= 'A' && s[n2 - 1] <= 'Z')
        s[n2 - 1] += 32;
    cout << s;
}

