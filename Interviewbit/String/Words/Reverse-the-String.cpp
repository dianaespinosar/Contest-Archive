#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int i,y,x;
	int j = -1; 
	string A;
	getline (cin, A);
	int n = A.size();
	for (i = 0; i < n; i++) {
		if ( A[i] != ' ') {
			A.push_back(A[i]);
		}
		else if (A[i] == ' ' && A[i + 1] != ' ' ) { 
			A.push_back(A[i]);
		}
	}	
	int m = A.size();
	reverse(A.begin(), A.end());
	A.resize(m-n);
	reverse(A.begin(), A.end());

	for (i = 0; i < A.size(); i++) {
		i = j + 1;
		
		for (j = i; j < A.size(); j++) {
		
			if (! isalnum(A[j]) ){
				reverse(A.begin() + i, A.begin() + j);
				break;
			}

			else if (j == A.size() - 1) {
				reverse(A.begin() + i, A.begin() + j + 1);	
			}	
		
		}
	}

	if (A[A.size() - 1] == ' ' ) {
		A.erase(A.begin() + A.size() - 1);
	}

	reverse(A.begin(),A.end());
}


	cout <<  A << endl;
	
}
