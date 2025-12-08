#include <iostream>
using namespace std;
int n,num,num1 = 0,number = 0;
int main () {
	cin >> n;
	for(int count=1;count < n+1 ;count++){
		num1 = 0;	
		for(int count2=1;count2 < 4 ;count2++){
			cin >> num;
			if(num == 1){
				num1 = num1 + 1;
			}
		}
		if(num1>1){
			number = number + 1;
		} 
	}
	 cout << number;	
}
