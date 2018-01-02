#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    k = k % 26;
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')                       
        {
			//s[i] = s[i] + k;
			int x = s[i];
			if(x > 122)
			{
				//while(x > 122)
					x = x - 26;
				s[i] = char(x);	
			}
			else
				s[i] = char(x);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
			//s[i] = s[i] + k;
			int x = s[i];
			//cout << x;
			if(x > 90)
			{
				//while(x > 90)
					x = x - 26;
				s[i] = char(x);	
			}
			else
				s[i] = char(x);
			//cout << x;
    	}
    }
    cout << s;
    return 0;
}
