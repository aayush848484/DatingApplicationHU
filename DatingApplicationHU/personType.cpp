#include <iostream>
#include <string>
#include "personType.h"

personType::personType() {
	name = "";
	person_no = 0;
	personID = 0;
}

void personType::setInterest1(std::string inter) {
	interest1 = inter;
}

std::string personType::getInterest1() const {
	return interest1;
}

void personType::setInterest2(std::string inter) {
	interest2 = inter;
}

std::string personType::getInterest2() const {
	return interest2;
}

void personType::printPerson() const {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Person Number: " << person_no << std::endl;
	std::cout << "Person ID: " << personID << std::endl;
	std::cout << "Gender: " << gender << std::endl;
	std::cout << "Street address number: " << address.streetAddressNum << address.zipCode << std::endl;
	std::cout << "Street Name: " << address.streetName << " " << address.streetType << " " << address.city << " " << address.stateInitials << std::endl;
	std::cout << "Interest 1: " << interest1 << std::endl;
	std::cout << "Interest 2: " << interest2 << std::endl;
	std::cout << std::endl;
}

addressType::addressType() {
	streetAddressNum = 0;
	zipCode = 0;
	streetName = "";
	streetType = "";
	city = "";
	stateInitials = "";
}

membershipType::membershipType() {
	membership_type = 0;
	member_ship_status = 0;
}

membershipType::membershipType(char membershiptype, char membership_status) {
	membership_type = membershiptype;
	member_ship_status = membership_status;
}

void membershipType::print_member_type() {
	std::cout << person_no << ". " << name << std::endl;
	std::cout << "Personal ID: " << personID << std::endl;
	std::cout << "Membership Status: " << member_ship_status << std::endl;
	std::cout << "Membership Type: " << membership_type << std::endl;
	std::cout << "Interests: " << getInterest1() << ", " << getInterest2() << std::endl;
	std::cout << address.streetAddressNum << " " << address.streetName << " " << address.streetType << " " <<
		address.city << " " << address.stateInitials << " " << address.zipCode << std::endl;
	std::cout << std::endl;
}


personType::personType() {
	name = "";
	person_no = 0;
	personID = 0;
}

void personType::setInterest1(std::string inter) {
	interest1 = inter;
}

std::string personType::getInterest1() const {
	return interest1;
}

void personType::setInterest2(std::string inter) {
	interest2 = inter;
}

std::string personType::getInterest2() const {
	return interest2;
}

void personType::printPerson() const {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Person Number: " << person_no << std::endl;
	std::cout << "Person ID: " << personID << std::endl;
	std::cout << "Gender: " << gender << std::endl;
	std::cout << "Street address number: " << address.streetAddressNum << address.zipCode << std::endl;
	std::cout << "Street Name: " << address.streetName << " " << address.streetType << " " << address.city << " " << address.stateInitials << std::endl;
	std::cout << "Interest 1: " << interest1 << std::endl;
	std::cout << "Interest 2: " << interest2 << std::endl;
	std::cout << std::endl;
}

addressType::addressType() {
	streetAddressNum = 0;
	zipCode = 0;
	streetName = "";
	streetType = "";
	city = "";
	stateInitials = "";
}

membershipType::membershipType() {
	membership_type = 0;
	member_ship_status = 0;
}

membershipType::membershipType(char membershiptype, char membership_status) {
	membership_type = membershiptype;
	member_ship_status = membership_status;
}

void membershipType::print_member_type() {
	std::cout << person_no << ". " << name << std::endl;
	std::cout << "Personal ID: " << personID << std::endl;
	std::cout << "Membership Status: " << member_ship_status << std::endl;
	std::cout << "Membership Type: " << membership_type << std::endl;
	std::cout << "Interests: " << getInterest1() << ", " << getInterest2() << std::endl;
	std::cout << address.streetAddressNum << " " << address.streetName << " " << address.streetType << " " <<
		address.city << " " << address.stateInitials << " " << address.zipCode << std::endl;
	std::cout << std::endl;
}

