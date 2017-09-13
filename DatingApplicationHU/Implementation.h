#include <iostream>
#include <string>
#include <specification.h>
using namespace std;

personType::personType() {
	name = "";
	person_no = 0;
	personID = 0;
}

void personType::setInterest1(string inter) {
	interest1 = inter;
}

string personType::getInterest1() const {
	return interest1;
}

void personType::setInterest2(string inter) {
	interest2 = inter;
}

string personType::getInterest2() const {
	return interest2;
}

void personType::printPerson() const {
	cout << "Name: " << name << endl;
	cout << "Person Number: " << person_no << endl;
	cout << "Person ID: " << personID << endl;
	cout << "Gender: " << gender << endl;
	cout << "Street address number: " << address.streetAddressNum << address.zipCode << endl;
	cout << "Street Name: " << address.streetName << " " << address.streetType << " " << address.city << " " << address.stateInitials << endl;
	cout << "Interest 1: " << interest1 << endl;
	cout << "Interest 2: " << interest2 << endl;
	cout << endl;
}

addressType::addressType() {
	streetAddressNum = 0;
	zipCode = 0;
	streetName = "";
	streetType = "";
	city = "";
	stateInitials = "";
}

