unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int ans = 0;
    string s = "";
    while(A > 0)
    {
        if(A % 2 == 0)
            s += "0";
        else
            s += "1";
        A /= 2;
    }
    int k = 0;
    string s1 = "";
    for(int i = s.length() - 1; i >= 0; i--)
        s1.push_back(s[i]);
    int x = 32 - s1.length();
    for(int i = 0; i < x; i++)
    {
        s1 = "0" + s1;
    }
    string s2 = "";
    for(int i = s1.length() - 1; i >= 0; i--)
        s2.push_back(s1[i]);
    for(int i = s2.length() - 1; i >= 0; i--)
    {
        ans = ans + (s2[i] - '0') * pow(2, k);
        k++;
    }
    return ans;
}
