vector<int> Solution::allFactors(int A) {
    vector <int> ans, final;
    for(int i = 1; i * i <= A; i++)
    {
        if(A % i == 0)
        {
            ans.push_back(i);
            if(A / i != i)
                final.push_back(A / i);
        }
    }
    int s1 = ans.size();
    int s2 = final.size();
    for(int i = s2 - 1; i >= 0; i--)
        ans.push_back(final[i]);
    return ans;
}
