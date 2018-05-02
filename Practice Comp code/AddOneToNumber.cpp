vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    vector<int> ans;
    int carry = 1;
    for (int i = 0; i < A.size(); i++) {
        int sum = A[i] + carry;
        ans.push_back(sum%10);
        carry = sum / 10;
    }
    while (carry) {
        ans.push_back(carry%10);
        carry /= 10;
    }
    while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    reverse(A.begin(), A.end());
    return ans;
}
