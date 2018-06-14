/*
*Crea la función searchfirst para que encuentre tu primer x en el vector.
*Haz la diferencia de x y x+1.
*/
int searchfirst(const vector<int> &A, int x) {
    int lo = 0;
    int hi = A.size() - 1;
    int mid;
    while (lo != hi) {
        mid = (lo + hi)/2;
        if (A[mid] >= x) {
            hi = mid;
        }
        else {
            lo = mid + 1;
        }
    }
    
    return lo;
}

int Solution::findCount(const vector<int> &A, int B) {
    int i = searchfirst(A, B);
    int j = searchfirst(A, B + 1);
    
    if (A[i] != B) {
        return 0;
    }
    
    if (A[j] == B) {
        return j - i + 1;
    }
    
    return j - i;
}
