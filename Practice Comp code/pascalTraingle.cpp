vector<vector<int> > Solution::generate(int A) 
{
    vector <vector<int > > ans;
    // for(int i = 0; i < A; i++)
    //     ans[i].resize(A);
    long long int fact[A + 1];
    fact[0] = 1;
    fact[1] = 1;
    for(int i = 2; i <= A; i++)
    {
        fact[i] = (long long)i * fact[i - 1];
    }
    if(A == 0)
    {
        // ans.resize(1);
        // ans[0].resize(1);
        // ans[0][0] = 1;
        return ans;
    }
    ans.resize(A);
    ans[0].resize(1);
    if(A == 1)
    {
        ans[0][0] = 1;
        return ans;
    }
    ans[0][0] = 1;
    for(int i = 1; i < A; i++)
    {
        ans[i].resize(i + 1);
        for(int j = 0; j <= i; j++)
        {
            ans[i][j] = (long long)((long long)fact[i] / (long long)fact[j]) / fact[i - j];
        }
    }
    return ans;
}
