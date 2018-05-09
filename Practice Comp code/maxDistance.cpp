int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n == 0)
        return -1;
        
    if(n == 1)
        return 0;
    
    vector <pair <int, int> > v;
    for(int i = 0; i < n; i++)
    {
        v.push_back(make_pair(A[i], i + 1));
    }
    
    sort(v.begin(), v.end());
    
    vector <int> maxV;
    maxV.push_back(v[n - 1].second);
    int maxF = v[n - 1].second;
    for(int i = n - 2; i >= 0; i--)
    {
        maxF = max(maxF, v[i].second);
        maxV.push_back(maxF);
    }
    reverse(maxV.begin(), maxV.end());
    int ans = maxV[0], ansF = INT_MIN;
    
    for(int i = 0; i < n - 1; i++)
    {
        int diff1 = maxV[i + 1] - v[i].second;
        int diff2 = maxV[i] - v[i].second;
        int diff = max(diff1, diff2);
        if(ansF < diff)
            ansF = diff;
    }
    return ansF;
}
