#include <iostream>
using namespace std;

int main() {
	int array[10] = {1, 2, 5, 3, 71, 6, 8, 12, 12, 53}, value;
	cout << "Enter the value you want to delete from the array: ";
	cin >> value;
	for (int i = 0; i != 10; i++) {
		if (array[i] == value) {
			array[i] = 0;
			break;
		} else if (i == 9 && array[i] != value) {
			cout << "Value is not present!";
		}
	}
	
	for (int i = 0; i != 10; i++) {
		cout << array[i] << " ";
	}
	
	return 0;
}
