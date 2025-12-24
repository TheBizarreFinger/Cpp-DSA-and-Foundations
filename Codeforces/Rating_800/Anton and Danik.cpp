#include <iostream>
using namespace std;

int main () {
	int count1 = 0, count2 = 0;
	long long gp;
	cin >> gp;
	char outcome[gp];
	for (int i = 0; i < gp; i++) {
		cin >> outcome[i];
		if (outcome[i] == 'A') {
			count1++;
		} else {
			count2++;
		}
	}
	for (int i = 0; i < gp; i++) {
		if (outcome[i] == 'A') {
			count1++;
		} else {
			count2++;
		}
	}
	if (count1 > count2) {
		cout << "Anton";
	} else if (count1 < count2) {
		cout << "Danik";
	} else {
		cout << "Friendship";
	}		
	return 0;
}
