int Solution::maxSubArray(const vector<int> &A) {
    vector<int> f(A.size());
    int ans, i;
		    
    for (i = 1, f[0] = A[0]; i < A.size(); i++) {
        f[i] = max(A[i], A[i] + f[i - 1]);
    }
		    
    for (ans = -1e10, i = 0; i < A.size(); i++) {
        ans = max(ans, f[i]);
    }
			    
    return ans;
						    
}
