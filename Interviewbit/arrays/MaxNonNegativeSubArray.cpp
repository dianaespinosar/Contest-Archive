tor<int> Solution::maxset(vector<int> &A) {
    int n = A.size();
    vector<int> S;
    int i, j,r;
    int maxi = -1;
    int maxj = -1;
    long long  maxsum = -1;
    long long  sum;
    int curridx;
    for (curridx = 0; curridx < n; ){
        for (i = curridx; i < n; ){
            if (A[i] >= 0){
                break; 
            }
            i++;
        }
        if (i == n){
            break;
        }
        for (j = i, sum = 0; j < n && A[j] >= 0; j++){
            sum +=  A[j];
        }
        if (sum > maxsum){
            maxi = i;
            maxj = j - 1;
            maxsum = sum;
        }
        else if (maxsum == sum){
            if ((j - i ) > maxj - maxi + 1){
                maxi = i;
                maxj = j - 1;
            }
        }
        
        curridx = j;
    }
    
    if (maxsum == -1)
      return S;
    
    for (r = maxi; r <= maxj; r++){
        S.push_back(A[r]); 
    }
    
    
    return S;
}

