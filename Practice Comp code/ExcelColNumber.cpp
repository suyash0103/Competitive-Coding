int Solution::titleToNumber(string A) {
    int l = A.length();
    int k = 0;
    int ans = 0;
    for(int i = l - 1; i >= 0; i--)
    {
        int x = (int) A[i];
        x = x - 64;
        ans = ans + (A[i] - 64) * pow(26, k);
        k++;
    }
    return ans;
}
