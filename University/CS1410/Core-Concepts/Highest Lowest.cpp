#include <iostream>
using namespace std;

void value (int array[], int index) {
	int temp, highest, lowest;
	for (int i = 0; i < index; i++) {
		temp = array[i];
		if (array[i] < lowest) {
			lowest = array[i];
		}
		if (array[i] > highest) {
			highest = array[i];
		}
	}
	cout << "Highest value is: " << highest << endl;
	cout << "Lowest value is: " << lowest;
}

int main () {
	int index;
	cout << "Enter the size of the array: "; 
	cin >> index;
	int arr[index];
	for (int i = 0; i < index; i++) {
		cout << "Enter value: ";
		cin >> arr[i];
	}
	value (arr, index);
	return 0;
}
