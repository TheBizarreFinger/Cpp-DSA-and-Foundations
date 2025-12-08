#include <iostream>
using namespace std;

main () {
	float num1, num2, sum, divide, subtract, multiply;	
	cout << "Enter first number: ";	
	cin >> num1;	
	cout << "Enter second number: ";	
	cin >> num2;	
	sum = num1 + num2;	
	divide = num1 / num2;
	subtract = num1 - num2;	
	multiply = num1 * num2;	
	cout << "The sum is " << sum << endl;	
	cout << "The divide is " << divide << endl;
	cout << "The subtract is " << subtract << endl;
	cout << "The multiply is " << multiply << endl;
}
