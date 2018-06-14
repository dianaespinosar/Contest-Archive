int Solution::titleToNumber(string A) {
    /*
	*Cada letra tiene un valor numérico del 1 al 26 y a ese valor le multiplico 26^k estanto en la casilla n - k - 1.
	*/
	int sum, mul, k;
    for (k = A.size() - 1, sum = 0, mul = 1; k >= 0; k--, mul *= 26) {
        sum += mul * (A[k] - 'A' + 1);
    }
    return sum;
}
