#include <iostream>
using namespace std;

void array_adder (int array1[][2], int array2[][2]) {
	int sum_array[2][2] = {{0, 0}, {0, 0}};
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 2; col++) {
			sum_array[row][col] = array1[row][col] + array2[row][col];
			cout << sum_array[row][col] << " ";
		}
		cout << endl;
	}	
}

int main () {
	int array_one[2][2] = {{2, 5}, {7, 6}}, array_two[2][2] = {{4, 8}, {1, 0}};
	array_adder (array_one, array_two);	
	return 0;
}
