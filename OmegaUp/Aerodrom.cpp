#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long N,M;
vector<long long> t;

bool P(long long s) {
	long long sum = 0;
	for (long long k = 0; k < N; k++) {
	   	sum += (s/t[k]);
		if (sum >= M)
			return true;
	}	
	
	return false;
}

int main() {
	long long low = 1;
	long long high = 1e18;
	long long mid;

	cin >> N >> M;
	t.resize(N);
	
	for (long long i = 0; i < N; i++)
		cin >> t[i];

	while (low != high) {
		mid = (low + high)/2; 
		if (P(mid)) {
			high = mid;
		}
		else {
			low = mid + 1;
		}
	}
	cout << low << endl;


