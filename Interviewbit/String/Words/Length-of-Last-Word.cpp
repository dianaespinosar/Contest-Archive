#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i;
    int length = 0;	
	int psp = -1;
	string A;
	getline (cin, A);
	
	for (i = 0; i < A.size(); i++) {
		if (isalnum(A[i])) {
			length ++;
		}	
		else if (! isalnum(A[i]) && isalnum (A[i + 1])) {
			length = 0;
		}
	}

	cout << length << endl;

}
