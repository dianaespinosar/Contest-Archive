/*
*gcd(m,n) = gcd(m-n,n)
*/
int Solution::gcd(int A, int B) {
    if (B > A) {
        swap (A,B);
    }
    while (B) {
        A = A%B;
        swap (A,B);
    }
    return A;
}
