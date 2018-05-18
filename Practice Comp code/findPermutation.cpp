vector<int> Solution::findPerm(const string A, int B) {
    vector <int> ans;
    for(int i = 1; i <= B; i++)
        ans.push_back(i);
    
    int l = A.length(), j = 0;
    // for(int x = 1; x <= B; x++)
    // {
    //     j = 0;
    //     for(int i = 0; i < l; i++)
    //     {
    //         if(A[i] == 'D' && ans[j] < ans[j + 1])
    //         {
    //             int temp = ans[j];
    //             ans[j] = ans[j + 1];
    //             ans[j + 1] = temp;
    //         }
    //         else if(A[i] == 'I' && ans[j] > ans[j + 1])
    //         {
    //             int temp = ans[j];
    //             ans[j] = ans[j + 1];
    //             ans[j + 1] = temp;
    //         }
    //         j++;
    //     }
    // }
    int start = -1, end = -1;
    for(int i = 0; i < l; i++)
    {
        if(A[i] == 'D')
        {
            start = i;
            while(A[i] == 'D' &&  i < l)
            {
                i++;
            }
            end = i;
            i--;
            reverse(ans.begin() + start, ans.begin() + end + 1);
        }
    }
    return ans;
}
