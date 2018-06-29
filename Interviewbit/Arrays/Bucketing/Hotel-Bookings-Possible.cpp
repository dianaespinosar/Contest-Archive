#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool testBooking(vector<int> &arrive, vector<int> &depart, int K) {
	vector<pair<int, int> > events;

	for (int i = 0; i < arrive.size(); i++) {
		events.push_back(make_pair(arrive[i], 1));
		events.push_back(make_pair(depart[i], -1));
	}

	sort(events.begin(), events.end());

	int count = 0;
	for (int i = 0; i < events.size(); i++) {
		count += events[i].second;

		if (count > K) {
			return false;
		}
	}

	return true;
}    

int main() {
	vector<int> arrivals;
	vector<int> depart;
	int k,a,d;
	cin >> a ;
	arrivals.resize(a);
	for (int i = 0; i < a; i++) {
		cin >>	arrivals[i];
	}
	cin >> d;
	depart.resize(d);
	for (int i = 0; i < d; i++) {
		cin >> depart[i];	
	}
	cin >> k;
	
	printf("%s\n", testBooking(arrivals, depart, k) ? "Yes" : "No");
}

