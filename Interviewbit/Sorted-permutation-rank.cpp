/*
*Fact[i] = i!
* numsmallerchars = # de letras después de la posición i que con menores a A[i]
*/
int Solution::findRank(string A) {
    
    long long MOD = 1000003;
    int i,j, numsmallerchars;
    long long fact [1000000], rank;
    fact [0] = 1;
    fact [1] = 1;
    for (i = 2; i < 1000000; i ++) {
        fact [i] = (fact [i - 1] * i) % MOD;
    }
    
    for (i = 0, rank = 0; i < A.size() - 1; i++) {
        for (j = i + 1, numsmallerchars = 0; j < A.size(); j++) {
            if (A[i] > A[j]){
                numsmallerchars++;
            }
        }
        rank = (rank + fact[A.size() - i - 1] * numsmallerchars) % MOD;
    }
    return rank + 1;
}
