int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int size = A[0];
    int steps = 0;
    for(int i = 1; i < A.size(); i++)
    {
        int m1 = abs(A[i] - A[i - 1]);
        int m2 = abs(B[i] - B[i - 1]);
        if(m1 >= m2)
            steps += m1;
        else
            steps += m2;
    }
    return steps;
}
