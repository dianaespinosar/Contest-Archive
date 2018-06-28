#include <cstdio>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

string CountandSay (string num) {		
	int i, count;
	string ans;
	for (i = 0, count = 1; i < num.size(); i++) {
	    if (num[i] == num [i + 1]) {	
			count++;
	    }	
		else {	
			ans.append(to_string(count));
			ans.push_back(num[i]);
			count = 1;
		}			
	}
	return ans;
}	

int main() {
	string ans;
	int A, i;
	cin >> A;
	for (i = 1, ans = "1"; i < A; i++) {
		ans = CountandSay(ans);
	}	
	cout << ans << endl;
}

