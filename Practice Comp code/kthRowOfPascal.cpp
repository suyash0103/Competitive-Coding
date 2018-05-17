vector<int> Solution::getRow(int A) {
    long long int fact[A + 1];
    fact[0] = 1;
    fact[1] = 1;
    for(int i = 2; i <= A; i++)
    {
        fact[i] = (long long)i * fact[i - 1];
    }
    vector <int> ans;
    if(A < 0)
        return ans;
    if(A == 0)
    {
        ans.push_back(1);
        return ans;
    }
    ans.push_back(1);
    for(int i = 1; i <= A; i++)
    {
        int push = (long long)((long long)fact[A] / (long long)fact[i]) / (long long)fact[A - i];
        ans.push_back(push);
    }
    return ans;
}
