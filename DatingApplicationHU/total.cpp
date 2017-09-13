#include <iostream>
#include <string>
#include <fstream>

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

class membershipType : public personType {
public:
	char membership_type, member_ship_status;

	membershipType();
	membershipType(char, char);
	void print_member_type();
};

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

int main()
{
	membershipType members[6];
	std::string x, i1, i2, f, l;
	std::ifstream myfile;
	myfile.open("infile.txt");
	std::cout << "Output: \n";
	for (int i = 0; i < 6; i++)
	{
		myfile >> f >> l >> members[i].person_no >>
			members[i].personID >> members[i].address.streetAddressNum >>
			members[i].address.streetName >> members[i].address.streetType >> members[i].address.city
			>> members[i].address.stateInitials >> members[i].address.zipCode >> members[i].gender >> i1 >> i2
			>> members[i].membership_type >> members[i].member_ship_status;
		members[i].name = l + " " + f;
		members[i].setInterest1(i1);
		members[i].setInterest2(i2);
		members[i].print_member_type();
	}
	myfile.close();
	system("pause");
	return 0;
}

/*
Output:
1. Jill Herold,
Personal ID: 2234
Membership Status: 2
Membership Type: 1
Interests: yoga, facebook
123 Main St. Washington, DC 20019

2. Stan Jackson,
Personal ID: 3748
Membership Status: 4
Membership Type: 2
Interests: sports, movies
12 Douglas Ave. Baltimore, MD 30229

3. Francis Jerry,
Personal ID: 6666
Membership Status: 1
Membership Type: 1
Interests: movies, roadtrips
2345 6th Street Woodbridge, VA 44040

4. Wilson Joan,
Personal ID: 1234
Membership Status: 3
Membership Type: 2
Interests: romance, dining
12 Georgia Ave. Washington, DC 20019

5. Stanley Smith,
Personal ID: 3456
Membership Status: 1
Membership Type: 2
Interests: movies, dining
56 D Street Baltimore, MD 30229

6. Claude Claire,
Personal ID: 2311
Membership Status: 1
Membership Type: 1
Interests: cooking, facebook
66 32nd Street Woodbridge, VA 44040
*/