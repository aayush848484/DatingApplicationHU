#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "personType.h"

struct NodeType{
	NodeType *next = NULL;
	membershipType value;
};

int main()
{
	NodeType *current = NULL, *head = NULL;
	std::string x, i1, i2, f, l;
	std::ifstream myfile;
	myfile.open("infile.txt");
	for (int x = 0; x < 6; x++) {
		if (head == NULL) {
			head = new NodeType;
			current = head;
		}
		else {
			(*current).next = new NodeType;
			current = (*current).next;
		}
				myfile >> f >> l >> (*current).value.person_no >>
					(*current).value.personID >> (*current).value.address.streetAddressNum >>
					(*current).value.address.streetName >> (*current).value.address.streetType >> (*current).value.address.city
				>> (*current).value.address.stateInitials >> (*current).value.address.zipCode >> (*current).value.gender >> i1 >> i2
				>> (*current).value.membership_type >> (*current).value.member_ship_status;
				(*current).value.name = l + " " + f;
				(*current).value.setInterest1(i1);
				(*current).value.setInterest2(i2);
		}
	myfile.close();
	current = head;
	while (current != NULL) {
		(*current).value.print_member_type();
		current = (*current).next;
	}
	system("pause");
	return 0;
}
/*
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