#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int A, i;
	string rom;
	cin >> A;
	int um = A / 1000;
	int c = (A % 1000) / 100;
	int d = (A % 100) / 10;
	int u = (A % 10);

	vector<string> M = { "", "M", "MM", "MMM"};
	vector<string> C = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    vector<string> X = {"", "X", "XX", "XXX" , "XL", "L", "LX", "LXX", "LXXX", "XC"};
    vector<string> I = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
	rom = M[um] + C[c] +X[d] + I[u];

	cout << rom << endl;
}
