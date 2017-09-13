
// Declaration file.
#include <iostream>
#include <string>


using namespace std;

class addressType {
public:
	int streetAddressNum, zipCode;
	string streetName, streetType, city, stateInitials;

	addressType();
};

class personType {
public:
	string name;
	int person_no, personID;
	char gender;
	addressType address;

	personType();

	void setInterest1(string inter);
	string getInterest1() const;
	void setInterest2(string inter);
	string getInterest2() const;
	void printPerson() const;

private:
	string interest1;
	string interest2;
};

class membershipType : public personType{
public: 
	char membership_type, member_ship_status;

	membershipType();
	membershipType(char, char);
	void print_member_type();
};







