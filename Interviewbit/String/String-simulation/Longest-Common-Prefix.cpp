#include <cstdio>
#include <cmath>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &A) {
	int i, j, sz;
	string lcp = A[0];
	sz = lcp.size();

    for (i = 0; i < A.size(); i++) {
        for (j = 0; j < sz; j++) {
            if (lcp[j] != A[i][j]) {
				sz = j;
			}
		}
	}
	lcp.resize(sz);
	return lcp;
}

int main() {
	string ans;
	int i, k;
	vector<string> A;
	cin >> k;
	A.resize(k);

	for (i = 0; i < k; i++) {
		cin >> A[i];
	}
	
	ans = longestCommonPrefix(A);
	cout << ans << endl;	

}
