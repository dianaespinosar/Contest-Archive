#include <cstdio> 
#include <cmath>
#include <algorithm> 
#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main() {
	int i;
	string A, B, ans;
	cin >> A >> B ;

	if (A.size() < B.size()) {
		swap(A,B);
	}	
	reverse(B.begin(), B.end());
	B.resize(A.size(), '0');
	reverse(B.begin(), B.end());
	ans.resize(A.size());

	int carry = 0;
	for (i = (A.size() - 1) ; i >= 0; i--) {
		ans[i] = (((A[i] - '0') + ( B[i] - '0' ) + carry) % 2) + '0';
		
		if	(((A[i] - '0') + ( B[i] - '0')) + carry > 1 ) {
			carry = 1;
			if ( i == 0) {
				reverse(ans.begin(),ans.end());
				ans.push_back('1');
				reverse(ans.begin(),ans.end());
			}	
		}

		else {
			carry = 0;
		}
	}
	cout << ans << endl;
}
