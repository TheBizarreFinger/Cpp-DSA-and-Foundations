#include <iostream>
using namespace std;

int main () {
	int n, temp;
	string word;
	cin >> n;
	for(int count=1 ;count < n+1; count++){
		cin >> word;
		temp = word.length();
		temp = temp - 2;
		if(temp+2 > 10){	
			cout << word[0] << temp << word[temp+1] << endl;
		}else{
			cout << word << endl;
		}
	}
}

