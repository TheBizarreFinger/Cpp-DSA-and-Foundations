#include <iostream>
using namespace std;

int main () {
	int even = 0, odd = 0, positive = 0, negative = 0, zeros = 0, length;
	cout << "Enter the length of the array: ";
	cin >> length;
	int array[length];
	for (int i = 0; i < length; i++) {
		cout << "Enter the value to add into array: ";
		cin >> array[i];
	}
	for (int i = 0; i < length; i++) {
		if (array[i] > 0) {
			positive++;
		}else if (array[i] < 0) {
			negative++;
		}else {
			zeros++;
		}
		if (array[i] % 2 == 0) {
			even++;
		}else {
			odd++;
		}
	}
	cout << "Positives: " << positive << endl << "Negatives: " << negative << endl << "Zeros: " << zeros << endl << "Even: " << even << endl << "Odds: " << odd;
	return 0;
}
