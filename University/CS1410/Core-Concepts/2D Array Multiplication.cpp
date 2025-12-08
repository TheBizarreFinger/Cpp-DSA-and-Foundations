#include <iostream>
using namespace std;

void matrix_multiplication (int array1[][3], int array2[][1]) {
	int sum, multiply;
	for (int row = 0; row != 2; row++) {
		for (int col = 0; col != 3 ; col++) {
			multiply = array1[row][col] * array2[col][0];
			sum += multiply;
			cout << "Sum: " << sum << endl;
		}
	}
	cout << sum;
}

int main () {
	int arr1[][3] = {{3, 2, 0}, {5, 6, 9}}, arr2[][1] = {{1}, {5}, {9}};
	matrix_multiplication(arr1, arr2);
	return 0;
}
