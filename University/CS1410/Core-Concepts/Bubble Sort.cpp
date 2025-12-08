#include <iostream>
using namespace std;

void bubble_sort (int array[]) {
	int temp = 0;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[j] > array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		cout << array[i] << " ";
	}
}

int main () {
	int arr[10] = {1, 0, 2, 5, 6, 1, 8, 3, 7, 10};
	bubble_sort (arr);
	return 0;
}
