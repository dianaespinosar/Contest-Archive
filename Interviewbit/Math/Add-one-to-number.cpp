/*Sumar 1 al último dígito.
 *  Verlo como vector.
 *  Si tiene a carry aumentar, si no parar.
 *En el caso 999..999 debes agregar un 1 al inicio para tener 100...000
  */


vector<int> Solution::plusOne(vector<int> &A) {            
    vector<int> ans;
    int n = A.size();
    int i;
    
    for (i = 0; i < n; i++){
        if (A[i] != 0){
            break;
        }
    }
    
    for (int j = i; j < n; j++){
        ans.push_back(A[j]);
    }
    int m = ans.size();
    
    bool carry = true;
    
    for (i = m - 1; i >= 0; i--) {
        if (!carry) {
            break;
        }
        
        if (ans[i] < 9) {
            ans[i]++;
            carry = false;
        }
        else {
            ans[i] = 0;
        }
    }
    
    if (carry) {
        ans.insert(ans.begin(), 1);
    }
    
    return ans;
}
