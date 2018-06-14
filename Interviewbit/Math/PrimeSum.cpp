/*
*Encuentre un primo p.
*Checa si A-p es primo, si no sigue buscand.
*/

vector<int> Solution::primesum(int A) {
    int prime;
    int i, j, k;
    vector<int> pair(2);
    if (A == 4){
        pair[0] = 2;
        pair[1] = 2;
        return pair;
    }    
    
    for (i = 3; i <= A; i+= 2) {
        
        for (j = 3; j*j <= i; j += 2) {
            if (i%j ==0)
              break;
        }
        if (j * j <= i)
          continue;
          
        prime = A - i;
        for (k = 2; k*k <= prime; k++) {
            if (prime%k ==0){
              break;
            }
        }
        
        if (k*k <= prime)
          continue;
          
        pair[0] = i;
        pair[1] = prime;
        return pair;
    }
    
    return pair;
}
