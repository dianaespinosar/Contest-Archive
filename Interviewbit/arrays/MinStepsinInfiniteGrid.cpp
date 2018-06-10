int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int r;
    int c;
    int steps = 0;
    for (int i = 0; i < n-1; i++){
        r = abs (A[i+1] - A[i]);
        c = abs (B[i+1] - B[i]);
        if ( r< c){
            steps = steps + c;
        }
         else {
             steps = steps + r;
         }   
    }
    return steps;
}
