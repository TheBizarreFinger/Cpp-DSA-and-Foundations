#include <iostream>
using namespace std;

int main() {
	int array[10], value;
	
	for (int i = 0; i != 10; i++) {
		cout << "Enter the value you want to insert into array: ";
		cin >> value;
		array[i] = value;
	}
	for (int i = 0; i != 10; i++) {
		cout << array[i] << " ";
	}
	
	return 0;
}
