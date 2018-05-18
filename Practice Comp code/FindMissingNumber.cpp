int Solution::firstMissingPositive(vector<int> &A) {
    int i = 0;
    while(i < A.size())
    {
        if(A[i] <= 0)
            i++;
        else if(A[i] > 0 && A[i] <= A.size())
        {
            int pos = A[i] - 1;
            int temp = A[i];
            A[i] = A[pos];
            A[pos] = temp;
            A[pos] = A[pos] * (-1);
        }
        else 
            i++;
    }
    for(i = 0; i < A.size(); i++)
    {
        if(A[i] > 0)
            return (i + 1);
        else if(A[i] <= 0)
        {
            int t = A[i] * (-1);
            if(t != i + 1)
                return (i + 1);
        }
    }
    return A.size() + 1;
}
