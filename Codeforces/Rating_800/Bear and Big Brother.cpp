#include <iostream>
using namespace std;

int main () {
	int a, b, count;
	cin >> a >> b;
	while (a <= b) {
		a = a * 3;
		b = b * 2;
		count++;
	}
	cout << count;
	
	return 0;
}
