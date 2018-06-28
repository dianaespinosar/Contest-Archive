/*
* gcd(A,B) = c0 , --> gcd (A/c, B) = c1 , --> .... --> gcd(A/ck, B) = 1
*/
1int Solution::cpFact(int A, int B) {
    
    while (A != 1 && B != 1) {
        int n = __gcd(A,B) ;
        if (n == 1) {
            return A;
        }
        else {
            A /= n;
        }
    }  
    return A;
}
