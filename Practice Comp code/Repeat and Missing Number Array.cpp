vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> v(A.size() + 1);
    fill(v.begin(), v.end(), 0);
    vector <int> ans;
    for(int i = 0; i < A.size(); i++)
    {
        v[A[i]]++;
    }
    int a1, b1;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == 2)
            a1 = i;
        if(v[i] == 0 && i != 0)
            b1 = i;
    }
    ans.push_back(a1);
    ans.push_back(b1);
    return ans;
}
