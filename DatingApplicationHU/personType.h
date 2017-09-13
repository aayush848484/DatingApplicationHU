// Declaration file.
#include <iostream>
#include <string>

class addressType {
public:
	int streetAddressNum, zipCode;
	std::string streetName, streetType, city, stateInitials;

	addressType();
};

class personType {
public:
	std::string name;
	int person_no, personID;
	char gender;
	addressType address;

	personType();

	void setInterest1(std::string);
	std::string getInterest1() const;
	void setInterest2(std::string);
	std::string getInterest2() const;
	void printPerson() const;

private:
	std::string interest1;
	std::string interest2;
};

class membershipType : public personType{
public: 
	char membership_type, member_ship_status;

	membershipType();
	membershipType(char, char);
	void print_member_type();
};







