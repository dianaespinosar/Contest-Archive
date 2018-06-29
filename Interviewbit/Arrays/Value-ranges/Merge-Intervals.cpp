#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

struct Interval {
	int start, end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

vector<Interval> intervalInsert(vector<Interval> &intervals, Interval newInterval) {
	vector<Interval> ans;
    int i;

	for (i = 0; i < intervals.size(); i++) {
		if ( intervals[i].end < newInterval.start ) {
			ans.push_back(intervals[i]);
		}
		else if (intervals[i].start > newInterval.end) {
			break;
		}
		else {
		newInterval.start = min (intervals[i].start, newInterval.start);
		newInterval.end = max (intervals[i].end , newInterval.end);
		}
	}

	ans.push_back(newInterval);

	for (; i < intervals.size(); i++) {
		ans.push_back(intervals[i]);
	}

	return ans;
}

int main() {
	int N, i;
	vector<Interval> intervals;
	Interval newInterval; cin >> N; 
	intervals.resize(N);

	for (i = 0; i < N; i++) {
		cin >> intervals[i].start >> intervals[i].end;
	}

	cin >> newInterval.start >> newInterval.end;


	vector<Interval> ans = intervalInsert(intervals, newInterval);

	for (i = 0; i < ans.size(); i++) {
		printf("[%d, %d]%s", ans[i].start, ans[i].end, i < ans.size() - 1 ? ", " : "\n");
	}

}
