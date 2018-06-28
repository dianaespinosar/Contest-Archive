/*Orilla de cada renglón es 1.
* Los 2 de arriba suman el de abajo.
*/

vector<vector<int> > Solution::generate(int A) {
    vector<vector<int> > pascal(A);
    int i,j;
    
    for (i = 0; i < A; i++) {
        pascal[i].resize(i + 1);
    }
    for (i = 0; i < A; i++) {
        for ( j = 0; j < i + 1; j++) {
            if (j == 0 || i == j ) {
                pascal[i][j] = 1;
            }
            else {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }
    return pascal;
}
