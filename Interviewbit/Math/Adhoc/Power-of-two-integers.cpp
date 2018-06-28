/*
*Encuentra d. d^k = A? 
*/
int Solution::isPower(int A) {
    long long di, cu;
    if (A == 1) {
        return true;
    }
    for (di=2; di * di <= A; di++) {
        if (A % di == 0) {
            for (cu = di * di; cu <= A; cu *= di) {
                if (cu == A) {
                    return true;
                }
            }
        }
    }
    return false;
}
