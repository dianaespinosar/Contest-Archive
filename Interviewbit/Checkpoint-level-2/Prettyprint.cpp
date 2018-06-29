/*
*Tomando el 1 como el centro(xi,yi), la max diferencia + 1 de x1 y xi y y1 y yi va a ser el valor de la coordenada (x1,y1). 
*/
vector<vector<int> > Solution::prettyPrint(int A) {
vector<vector<int> > rect((2*A - 1));
    int i,j;
    
    for (i = 0; i < (2*A) - 1; i++) {
        rect[i].resize((2*A) - 1); 
    } 
    
    for (i = 0; i < (2*A) - 1; i++) {
        for (j = 0; j < (2*A) - 1; j++) {
            rect[i][j] = (max (abs (A - 1 - i) , abs (A - 1 - j))) + 1;
        }
    }
    return rect;
}
