#include <iostream>
using namespace std;

int main () {
	string word;
	cin >> word;
	if (!(word[0] > 64 && word[0] < 92)) {
		word[0] = word[0] - 32;
	}
	cout << word;
	
	return 0;
}
