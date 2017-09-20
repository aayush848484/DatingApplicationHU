#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "personType.h"

void print_vector(std::vector <membershipType> members, std::vector<membershipType>::iterator i);

int main()
{
	std::vector <membershipType> members;
	std::vector<membershipType>::iterator i;
	membershipType member_temp;
	std::string x, i1, i2, f, l;
	std::ifstream myfile;
	myfile.open("infile.txt");
	for (int x = 0; x < 6; x++) {
		myfile >> f >> l >> member_temp.person_no >>
			member_temp.personID >> member_temp.address.streetAddressNum >>
			member_temp.address.streetName >> member_temp.address.streetType >> member_temp.address.city
			>> member_temp.address.stateInitials >> member_temp.address.zipCode >> member_temp.gender >> i1 >> i2
			>> member_temp.membership_type >> member_temp.member_ship_status;
		member_temp.name = l + " " + f;
		member_temp.setInterest1(i1);
		member_temp.setInterest2(i2);
		members.push_back(member_temp);
	}
	myfile.close();
	print_vector(members, i);
	system("pause");
	return 0;
}

void print_vector(std::vector <membershipType> members, std::vector<membershipType>::iterator i) {
	for (i = members.begin(); i != members.end(); i++) {
	i->print_member_type();
	}
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