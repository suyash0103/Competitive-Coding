// PARTIAL
vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int flag = 0;
    
    vector <int> ans;
    
    for(int i = 0; i < n - 1; i++)
    {
        if(A[i] > A[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        ans.push_back(-1);
        return ans;
    }
    
    if(n == 1 || n == 0)
    {
        ans.push_back(-1);
        return ans;
    }
    
    int start = -1, end = 0, count = 0;
    
    vector <int> org;
    for(int i = 0; i < n; i++)
    {
        org.push_back(A[i]);
    }
    sort(org.begin(), org.end());
    
    int endF = -2;
    for(int i = 0; i < n; i++)
    {
        if(A[i] != org[i])
        {
            if(count == 0)
            {
                start = i;
                end = i;
                count++;
            }
            else if(count != 0)
            {
                end = i;
                if(endF < end)
                    endF = end;
            }
        }
    }
    
    ans.push_back(start);
    ans.push_back(endF);
    return ans;
}
