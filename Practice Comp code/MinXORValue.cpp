int Solution::findMinXor(vector<int> &A) {
    int l = A.size();
    int min = INT_MAX;
    sort(A.begin(), A.end());
    for(int i = 0; i < l - 1; i++)
    {
        int x = A[i] ^ A[i + 1];
        if(x < min)
            min = x;
    }
    return min;
}
