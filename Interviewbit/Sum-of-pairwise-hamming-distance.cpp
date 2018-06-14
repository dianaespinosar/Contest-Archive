/*
*En binario cada número tiene 32 espacios (dependiendo del tamaño del nuúmero).
*Vas a ir convitiendo al núero en binario y si tiene un 1 lo anotas en el countbits correspondiente.
*Vas a contar cuantos 1 hay en la posición k de todos los números. 
* k*(n-k) = la diferencia de 1s y 0s en la pisición k. 
*/
	int Solution::hammingDistance(const vector<int> &A) {
    long long i, j, sum, aux;
    long long  n = A.size();
    long long MOD = 1000000007;
    vector<long long> countbits(32);
    
    for (i = 0; i < 32; i++) {
        countbits[i] = 0;
    }
    
    for (i = 0; i < n; i++) {
        aux = A[i];
        for(j = 0; aux; aux /= 2, j++) {
            if ((aux % 2) == 1) {
                countbits[j]++;
            }
        }
    }
    
    for (i = 0, sum = 0; i < 32; i++) {
        sum = (sum + (countbits[i] * (n - countbits[i]))) % MOD;
    }
    
    return (2 * sum)  % MOD;
}
