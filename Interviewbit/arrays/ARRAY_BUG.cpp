vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret; 
    B = (B)%A.size();
    for (int i = 0; i < A.size(); i++) {
        int k = (i+B)%A.size();
        ret.push_back(A[k]);
    }
    return ret; 
}
