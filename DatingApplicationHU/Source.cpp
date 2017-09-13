#include <iostream>
#include <fstream>
#include <string>
#include <implementation.h>

using namespace std;

int main()
{
	membershipType members[6];
	string x, i1, i2, f, l;
	ifstream myfile;
	myfile.open("infile.txt");
	for (int i = 0; i < 6; i++)
	{
		myfile >> f >> l >> members[i].person_no >>
			members[i].personID >> members[i].address.streetAddressNum >>
			members[i].address.streetName >> members[i].address.streetType >> members[i].address.city
			>> members[i].address.stateInitials >> members[i].address.zipCode >> members[i].gender >> i1 >> i2
			>> members[i].membership_type >> members[i].member_ship_status;
		members[i].name = f + " " + l;
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
1. Herold, Jill
Personal ID : 2234
Membership Status : 2
Membership type : 1
Interests : yoga, facebook
	123 Main St.Washington, DC 20019

	Output :
	2. Jackson, Stan
	Personal ID : 3748
	Membership Status : 4
	Membership type : 2
	Interests : sports, movies
	12 Douglas Ave.Baltimore, MD 30229

	Output :
	3. Jerry, Francis
	Personal ID : 6666
	Membership Status : 1
	Membership type : 1
	Interests : movies, roadtrips
	2345 6th Street Woodbridge, VA 44040

	Output :
	4. Joan, Wilson
	Personal ID : 1234
	Membership Status : 3
	Membership type : 2
	Interests : romance, dining
	12 Georgia Ave.Washington, DC 20019

	Output :
	5. Smith, Stanley
	Personal ID : 3456
	Membership Status : 1
	Membership type : 2
	Interests : movies, dining
	56 D Street Baltimore, MD 30229

	Output :
	6. Claire, Claude
	Personal ID : 2311
	Membership Status : 1
	Membership type : 1
	Interests : cooking, facebook
	66 32nd Street Woodbridge, VA 44040
	*/