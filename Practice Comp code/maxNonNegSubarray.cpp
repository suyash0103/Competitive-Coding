vector<int> Solution::maxset(vector<int> &A) {
    long long int start = -1, end = -1, startF = -1, endF = -1, count = 0, countF = -1, flag = 0, check = 0;
    int n = A.size();
    vector <int> ans;
    for(int i = 0; i < n; i++)
    {
        if(A[i] >= 0)
        {
            check = 1;
            break;
        }
    }
    if(check == 0)
        return ans;
    
    for(int i = 0; i < n; i++)
    {
        if(A[i] >= 0)
        {
            start = i;
            while(A[i] >= 0 && i < n)
            {
                count += (long long)A[i];
                i++;
            }
            end = i - 1;
            if(countF < count)
            {
                countF = count;
                startF = start;
                endF = end;
            }
            else if(countF == count)
            {
                int t1 = end - start;
                int t2 = endF - startF;
                if(t1 > t2)
                {
                    startF = start;
                    endF = end;
                }
            }
            i--;
        }
        else
        {
            count = 0;
        }
    }
    for(int i = startF; i <= endF; i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
}
