#include <iostream>
using namespace std;

int main () {
	int array1[10] = {0, 1, 2, 5}, array2[10] = {1, 21, 51, 73, 38, 23, 12, 76, 45, 50};
	for (int i = 4; i < 10; i++) {
		array1[i] = array2[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << array1[i] << endl;
	}
	
	return 0;
}
