/*
*Genera el Triángulo de Pascal en 2 renglónes (pares e impares) e imprime el renglón k % 2.
*/
vector<int> Solution::getRow(int A) {
    vector<vector<int> > pascal(A + 1);

    int i,j;
    
    for (i = 0; i < 2; i++) {
        pascal[i].resize(i + 1);
    }
    for (i = 0; i < A + 1; i++) {
        for ( j = 0; j < i + 1; j++) {
            pascal[i % 2].resize( i + 1);
            if (j == 0 || i == j ) {
                pascal[i % 2][j] = 1;
            }
            else {
            pascal[i % 2][j] = pascal[(i - 1) % 2][j - 1] + pascal[(i - 1) % 2][j];
            }
        }
    }
    return pascal[A % 2];
}
