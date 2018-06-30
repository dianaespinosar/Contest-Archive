#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	string A;
	cin >> A;
	int i;
	int num = 0;
	for (i = 0; i < A.size(); i++) {
				
		if (A[i] == 'I') {

			if (A[i + 1] == 'I' || i + 1 == A.size()) {
			   	num += 1;
			}	
			else  {
				num -= 1;
			}
		}	

		if (A[i] == 'X') {
			if ( A[i + 1] == 'L'|| A[i + 1] == 'C' || A[i + 1] == 'D'|| A[i + 1] == 'M' ) {
			   	num -= 10;
			}	
			else  {
				num += 10;
			}	
		}	

		if (A[i] == 'C') {
			if (A[i + 1] == 'D'|| A[i + 1] == 'M' ) {
			   	num -= 100;
			}	
			else  {
				num += 100;
			}	
		}

		if (A[i] == 'M') {
		   	num += 1000;
		}	
		
		if (A[i] == 'V') {
			num += 5;
		}

		if (A[i] == 'L') {
			num += 50;
		}	

		if (A[i] == 'D') {
			num += 500;
		}	
	}

	cout << num << endl;
}
