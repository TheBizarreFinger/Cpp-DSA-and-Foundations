#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

char to_lower_wrapper(char c) {  
    return static_cast<char>(tolower(static_cast<unsigned char>(c)));
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), to_lower_wrapper);
    transform(str2.begin(), str2.end(), str2.begin(), to_lower_wrapper);

    if (str1 < str2) {
        cout << "-1";
    } else if (str2 < str1) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}

