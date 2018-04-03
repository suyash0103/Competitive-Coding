#include <bits/stdc++.h>

using namespace std;

int min(int a, int b, int c)
{
    return min(min(a, b), c);
}

int edit(string s1, int l1, string s2, int l2)
{
    if(l1 == 0)
        return l2;
    if(l2 == 0)
        return l1;
    if(s1[l1 - 1] == s2[l2 - 1])
        return edit(s1, l1 - 1, s2, l2 - 1);
    return 1 + min(edit(s1, l1 - 1, s2, l2), edit(s1, l1 - 1, s2, l2 - 1), edit(s1, l1, s2, l2 - 1));
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
    int ans = edit(s1, l1, s2, l2);
    cout << ans << endl;
}

