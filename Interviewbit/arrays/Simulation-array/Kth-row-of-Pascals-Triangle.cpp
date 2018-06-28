/*
*Genera el Triángulo de Pascal e imprime el renglón k.
*/
vector<int> Solution::getRow(int A) {
    vector<vector<int> > pascal(A + 1);
    int i,j;
    
    for (i = 0; i < A + 1; i++) {
        pascal[i].resize(i + 1);
    }
    for (i = 0; i < A + 1; i++) {
        for ( j = 0; j < i + 1; j++) {
            if (j == 0 || i == j ) {
                pascal[i][j] = 1;
            }
            else {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }
    return pascal[A ];
}
