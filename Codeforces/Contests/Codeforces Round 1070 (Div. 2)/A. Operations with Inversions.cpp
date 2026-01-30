#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int count = 1; count <= t; count++) {
        int n;
        cin >> n;
        int array[n];
        for (int k = 0; k < n; k++) {
            cin >> array[k];
        }
        int operations = 0;
        int minSuffix = 9999999;
        for (int i = n - 1; i >= 0; i--) {
            if (array[i] > minSuffix) {
                operations++;
            }
            if (array[i] < minSuffix) {
                minSuffix = array[i];
            }
        }
        cout << operations << endl;
    }
    return 0;
}

