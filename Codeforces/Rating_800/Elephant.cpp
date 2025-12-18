#include <iostream>
using namespace std;

int main () {
	int count;
	long long x;
	cin >> x;
	while (x != 0) {
		if (x >= 5) {
			count = count + 1;
			x = x - 5;
		} else if (x >= 4) {
			count = count + 1;
			x = x - 4;
		} else if (x >= 3) {
			count = count + 1;
			x = x - 3;
		} else if (x >= 2) {
			count = count + 1;
			x = x - 2;
		} else {
			count = count + 1;
			x = x - 1;
		}
	}
	cout << count;
	return 0;
}
