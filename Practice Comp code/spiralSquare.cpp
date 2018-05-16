vector<vector<int> > Solution::generateMatrix(int A) {
    vector <vector<int> > ans;
    ans.resize(A);
    for(int i = 0; i < A; i++)
        ans[i].resize(A);
    // long long int sq = (long long)A * (long long)A;
    int dir = 0;
    int top = 0, bottom = A - 1, left = 0, right = A - 1;
    int num = 1;
    while(top <= bottom && left <= right)
    {
        if(dir == 0)
        {
            for(int i = left; i <= right; i++)
            {
                ans[top][i] = num;
                num++;
            }
            top++;
            dir = 1;
        }
        else if(dir == 1)
        {
            for(int i = top; i <= bottom; i++)
            {
                ans[i][right] = num;
                num++;
            }
            right--;
            dir = 2;
        }
        else if(dir == 2)
        {
            for(int i = right; i >= left; i--)
            {
                ans[bottom][i] = num;
                num++;
            }
            bottom--;
            dir = 3;
        }
        else if(dir == 3)
        {
            for(int i = bottom; i >= top; i--)
            {
                ans[i][left] = num;
                num++;
            }
            left++;
            dir = 0;
        }
    }
    return ans;
}
