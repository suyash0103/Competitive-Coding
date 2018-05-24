int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int r = A.size();
    int c = A[0].size();
    
    if(B < A[0][0] || B > A[r - 1][c - 1])
        return 0;
    
    int row = 0;
    for(int i = 0; i < r; i++)
    {
        if(A[i][0] <= B && A[i][c - 1] >= B)
        {
            row = i;
            break;
        }
    }
    int low = 0, high = c - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(A[row][mid] == B)
            return 1;
        else if(A[row][mid] < B)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
