#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    
    int max_val = 0;
    int min_val = 101;
    int max_idx = 0;
    int min_idx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
        if (a[i] <= min_val) {
            min_val = a[i];
            min_idx = i;
        }
    }

    int total_swaps = max_idx + (n - 1 - min_idx);
    
    if (max_idx > min_idx) {
        total_swaps = total_swaps - 1;
    }

    cout << total_swaps << endl;
    return 0;
}
