int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    
    if(n == 0)
        return -1;
    
    if(n == 1 && A[0] != 0)
        return -1;
    
    if(n == 1 && A[0] == 0)
        return 1;
    
    for(int i = 0; i < n; i++)
    {
        int p = A[i];
        int p1 = n - (i + 1);
        if(p == p1 && A[i] != A[i + 1] && i < n - 1)
            return 1;
        if(p == p1 && i == n - 1)
            return 1;
    }
    return -1;
}
