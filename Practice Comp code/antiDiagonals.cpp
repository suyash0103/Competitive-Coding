vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector <vector <int> > ans;
    int n = A[0].size();
    ans.resize(2 * n - 1);
    for(int i = 0; i < n; i++)
    {
        int l = i, r = 0;
        while(l >= 0)
        {
            ans[i].push_back(A[r][l]);
            l--;
            r++;
        }
    }
    
    for(int i = n; i <= 2 * n - 2; i++)
    {
        int rval = i - (n - 1);
        int lval = n - 1;
        while(rval <= n - 1)
        {
            ans[i].push_back(A[rval][lval]);
            rval++;
            lval--;
        }
    }
    return ans;
}
