#include <iostream>
using namespace std;

int main () {
	int n, a, b, capacity = 0, current = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		current = (current + b) - a;
		if (current > capacity) {
			capacity = current;
		}
	}
	cout << capacity;
	
	return 0;
}
