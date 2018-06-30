#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	string A;
	int i,j;
	cin >> A;
	string rve = A;
	reverse(rve.begin(), rve.end());
	
	for (i = 0; i < A.size(); i++) {
	
		for (j = 0; i + j < A.size() + 1; j++) {
			if ( i + j == A.size() - 1) {
				cout << i << endl;
				return i;
			}

			if (rve[i + j] != A[j]) {  // rve[i + j] != A[j]  --> No palíndromo
				break;
			}
		}

	}	
	cout << i << endl;

}
