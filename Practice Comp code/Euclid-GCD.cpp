int Solution::gcd(int A, int B) {
    if(A == 0 && B == 0)
        return 0;
    if(A == 0)
        return B;
    if(B == 0)
        return A;
    if(A == B)
        return A;
    return gcd(B % A, A);
}
