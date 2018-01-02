#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    char s[100005];
    while(n--)
    {
    	cout << "x";
        scanf("%[^\n]%*c", s);
        for(int i = 0; i < strlen(s); i++)
            if(s[i] == '=')
                ans++;
    }
    cout << ans;
}
