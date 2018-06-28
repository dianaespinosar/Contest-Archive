vector<int> Solution::sieve(int A) {
    vector<int> primos(A+1);
    vector<int> prime;
    int i, j;
    for (int i = 0; i <= A; i++){
        primos[i] = 1;
    }
    primos[0] = 0;
    primos[1] = 0;
    
    for (i = 2; i * i<= A; i++){
        if (primos[i] == 1){
            for (j = i * i; j <= A; j += i){
                primos[j] = 0;
            }
        }
    }
    
    for (i = 2; i <= A; i++)
      if (primos[i] == 1)
        prime.push_back(i);
        
    return prime;
}    
