string Solution::convertToTitle(int A) {
    int n;   
    string ans;
    for (n = A % 26; A > 0; n = A % 26){
        n = n == 0 ? 26 : n; /*Si n es 0 n 26, si no n = n.  */
        
        A = (A - n) / 26;
        ans.push_back('A' + n - 1);
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}
