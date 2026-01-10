#include <iostream>
using namespace std;

struct Students {
	int id;
	string name;
	struct Address {
		string city;
		string country	;
	} 
	address;
};

int main () {
	Students* student = new Students;
	student -> id = 0123;
	student -> name = "John Ali";
	student -> address.city = "Malir";
	student -> address.country = "London";
	cout << "Student Name: " << student -> name << "\nStudent ID:" << student -> id << "\nStudent City: " 
	<< student -> address.city << "\nStudent Country: " << student -> address.country;
	delete student;
	
	return 0;
}
