#include <bits/stdc++.h>

using namespace std;

int min(int a, int b, int c)
{
    return min(min(a, b), c);
}

int main()
{
    string s1, s2;
    cout << "Enter 1st string:";
    cin >> s1;
    cout << "Enter 2nd string:";
    cin >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    
    int a[l1 + 1][l2 + 1];

    for(int i = 0; i <= l1; i++)
    {
        for(int j = 0; j <= l2; j++)
        {
            if(i == 0)
                a[i][j] = j;
            else if(j == 0)
                a[i][j] = i;
            else if(s1[i - 1] == s2[j - 1])
                a[i][j] = a[i - 1][j - 1];
            else
                a[i][j] = 1 + min(min(a[i - 1][j], a[i - 1][j - 1]), a[i][j - 1]);
        }
    }
    cout << a[l1][l2] << endl;
}

