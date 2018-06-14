/*
*Crear el contrario de A usando mod. 10.
*/
int Solution::isPalindrome(int A) {
    int copy = A;
    int reverse = 0;
    int r;
    for (; 0 < copy; copy /= 10) {
        r = copy %10;
        reverse = (10*reverse) + r;
    }
    
    if (reverse == A) {
        return true;
    }
    
    return false;
}
