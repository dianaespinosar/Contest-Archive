nt Solution::isPrime(int A) {
    int d;
    if (A == 1){
        return 0;
    }
    
    for (d = 2; d*d <= A; d++){
        if (A%d == 0){
            return 0;
        }
    }
    return 1;
}
