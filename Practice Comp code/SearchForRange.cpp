int bin(const vector<int> &A, int low, int high, int B, bool first)
{
    int ans = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(A[mid] == B)
        {
            ans = mid;
            if(first)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if(A[mid] < B)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector <int> ans;
    int n = A.size();
    int first = bin(A, 0, n - 1, B, true);
    if(first == -1)
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    else
    {
        int last = bin(A, 0, n - 1, B, false);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
}
