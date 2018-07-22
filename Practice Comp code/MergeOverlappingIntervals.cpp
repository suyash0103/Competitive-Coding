bool sorter(const Interval &a, const Interval &b)
{
    return a.start < b.start;
}

vector<Interval> Solution::merge(vector<Interval> &A) {

    vector <Interval> ans;
    sort(A.begin(), A.end(), sorter);
    // return A;
    int n = A.size();
    int start = A[0].start;
    int end = A[0].end;
    for(int i = 1; i < n; i++)
    {
        if(start <= A[i].start && end >= A[i].start)
        {
            if(end < A[i].end)
                end = A[i].end;
        }
        else
        {
            // struct Interval inter = (struct Interval)malloc(sizeof(struct Interval));
            struct Interval inter = Interval(start, end);
            // inter.start = start;
            // inter.end = end;
            ans.push_back(inter);
            start = A[i].start;
            end = A[i].end;
        }
    }
    struct Interval inter = Interval(start, end);
    ans.push_back(inter);
    return ans;
}
