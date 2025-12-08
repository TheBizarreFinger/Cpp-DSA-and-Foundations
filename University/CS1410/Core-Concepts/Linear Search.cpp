#include <iostream>
using namespace std;

int main () {
	int count2 ,array[25] ,num ,number;
	for (int count=0;count<26;count++){
		cout << "Enter number you want to store in array: ";
		cin >> number;
		array[count]=number;
	}
	cout << "Enter the number you want to search: ";
	cin >> num;
	
	for (int count=0;count<26;count++){
         if (num == array[count] ){
         	count2++;
		 }
	}
	if (count2 > 0){
		cout << "Number is present " << count2 <<" times";
	}else{
		cout << "The number isn't present";	
	}
	
	return 0;
}
