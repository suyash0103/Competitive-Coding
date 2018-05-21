string Solution::findDigitsInBinary(int A) {
    string s = "";
    if(A == 0)
    {
        s += '0';
        return s;
    }
    while(A > 0)
    {
        s += A % 2 + '0';
        A = A / 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
