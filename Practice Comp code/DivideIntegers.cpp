int Solution::divide(int A, int B) {
    if(B == 0)
    {
        if(A >= 0)
            return INT_MAX;
        return INT_MIN;
    }
    if(A == INT_MIN)
    {
        if(B == 1)
        {
            return INT_MIN;
        }
        else if(B == -1)
        {
            return INT_MAX;
        }
    }
    int ans = A / B;
    return ans;
}
