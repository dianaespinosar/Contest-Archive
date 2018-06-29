#include <cstdio>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int main() {
	int i;
	string sentence;
	string alnumsen;
	bool possible = true;

	getline (cin, sentence);

	for (i = 0; i < sentence.size(); i++) {
			if( isalnum(sentence[i]) ) {
				alnumsen.push_back(tolower(sentence[i]));
			}
	}

	for (i = 0; i < alnumsen.size(); i++) {
		if (alnumsen[i] != alnumsen[(alnumsen.size() - i - 1)]) {
				possible = false;
		}
	}

	cout << "Palíndromo? " << possible << "\n" ;
}	
