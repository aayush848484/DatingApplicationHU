// Declaration file.
#include <iostream>
#include <string>
#include <vector>

class contact_infoType
{
public:
	std::string get_emailAddress;
private:
	std::string emailAddress;
	std::string phoneNumber;
	std::string userName;
	std::string password;
};

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

protected:
	contact_infoType contact_info;
};

class membershipType : public personType {
public:
	char membership_type, member_ship_status;

	membershipType();
	membershipType(char, char);
	void print_member_type();
};

