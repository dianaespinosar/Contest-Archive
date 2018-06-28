/*6
*El mayor número que se puede meter en 32 bytes es 2^31 
*/
int Solution::reverse(int A) {
    long long copy = abs(A);
    long long reverse = 0;
    long long r;

    for (; copy; copy /= 10) {
        r = copy % 10;
        reverse = (10*reverse) + r;
    }
    
    if (reverse >= (1LL<<31)){
        return 0;
    }
    if (A > 0) {
        return reverse;
    }
    return reverse * (-1);
}
