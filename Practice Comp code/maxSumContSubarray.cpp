int Solution::maxSubArray(const vector<int> &A) {
    int max = 0;
    int maxFinal = 0;
    int flag = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] > 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        int min = A[0];
        for(int i = 1; i < A.size(); i++)
        {
            if(A[i] > min)
                min = A[i];
        }
        return min;
    }
    for(int i = 0; i < A.size(); i++)
    {
        max += A[i];
        if(max < 0)
            max = 0;
        if(maxFinal < max)
            maxFinal = max;
    }
    return maxFinal;
}
