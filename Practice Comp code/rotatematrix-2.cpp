void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int k = i;
            int temp = A[k][j];
            A[k][j] = A[j][k];
            A[j][k] = temp;
        }
    }
    
    int l = 0, r = n - 1;
    while(l < r)
    {
        for(int i = 0; i < n; i++)
        {
            int temp = A[i][l];
            A[i][l] = A[i][r];
            A[i][r] = temp;
        }
        l++;
        r--;
    }
}
