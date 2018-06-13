#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main(){

	long long N;
	cin >> N;
	long long low = 1;
	long long high = 2000000000;
	long long mid = (low + high)/2;
	
	while ( low != high) {
		mid = (low + high)/2;
		if ( (mid*(mid+1)/2) >= N) {
			high = mid;
		}

		else {
		   low = mid + 1;
		}

	}
	if (low == high) {
		cout << low << endl;	
	}
}	

