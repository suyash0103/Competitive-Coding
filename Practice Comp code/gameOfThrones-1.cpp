#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function
    int n = s.length();
    int count = 1;
    int final = 0;
    sort(s.begin(), s.end());
    int j;
    int flag = 0;
    for(int i = 0; i < n - 1; i++)
    {
        j = i + 1;
        while(s[i] == s[j] && j < n)
        {
            j++;
            count++;
        }
        if(count % 2 == 1)
            final++;
        if(final > 1)
        {
            flag = 1;
            break;
        }
        count = 1;
        i = j - 1;
    }
    if(flag == 1)
        return "NO";
    else
        return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
