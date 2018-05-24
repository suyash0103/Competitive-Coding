int search(const vector<int> &A, int n, int x, bool first)
{
    int low = 0, high = n - 1, ans = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(A[mid] == x)
        {
            ans = mid;
            if(first)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if(A[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int Solution::findCount(const vector<int> &A, int B) {
    int n = A.size();
    int start = search(A, n, B, true);
    if(start == -1)
        return 0;
    else
    {
        int end = search(A, n, B, false);
        return (end - start + 1);
    }
}
