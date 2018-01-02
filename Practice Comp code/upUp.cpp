#include <bits/stdc++.h>
using namespace std;

int main()
{
    //string s;
    char s[30005];
    scanf("%[^\n]%*c", s);
    if(s[0] >= 97 && s[0] <= 122)
    	s[0] -= 32;
    for(int i = 0; i < strlen(s); i++)
    {
        //cout << "1";
        if(s[i] == ' ' && i < strlen(s) - 1 && s[i + 1] >= 97 && s[i + 1] <= 122)
        {
        	//printf("%c", s[i]);
        	s[i + 1] = s[i + 1] - 32;
        	//printf("%c", s[i + 1]);
		}
    }
    printf("%s", s);
}
