bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector <pair <int, int> > v;
    
    for(int i = 0; i < arrive.size(); i++)
    {
        v.push_back(make_pair(arrive[i], 1));
        v.push_back(make_pair(depart[i], 0));
    }
    
    sort(v.begin(), v.end());
    
    int ans = 0, max = -1;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].second == 1)
            ans++;
        else if(v[i].second == 0)
            ans--;
        if(ans > K)
            return false;
    }
    return true;
}
