int Solution::maxArr(vector<int> &A) {
    int i,j,ans;
    int maxi = -1e9;
    int mini = 1e9;
    int maxim = -1e9;
    int minim = 1e9;
    vector<int> difference, differ;
    for (i = 0; i < A.size(); i++) {
        difference.push_back(A[i] - i);
        differ.push_back(A[i] + i);
        maxi = max(maxi, difference[i]);
        mini = min (mini, difference [i]);
        maxim = max(maxim, differ[i]);
        minim = min (minim, differ[i]);
    }
    
    ans = max(maxi - mini, maxim - minim);
    return ans;
}
