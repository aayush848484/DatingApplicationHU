#include <iostream>
#include <fstream>
#include <string>
#include <implementation.h>

using namespace std;

int main()
{
	personType members[6];
	string x, i1, i2, f, l;
	ifstream myfile;
	myfile.open("infile.txt");
	for (int i = 0; i < 6; i++)
	{
		myfile >> f >> l >> members[i].person_no >>
			members[i].personID >> members[i].address.streetAddressNum >>
			members[i].address.streetName >> members[i].address.streetType >> members[i].address.city >> members[i].address.stateInitials >> members[i].address.zipCode >> members[i].gender;
		myfile >> i1 >> i2;
		members[i].name = f + " " + l;
		members[i].setInterest1(i1);
		members[i].setInterest2(i2);
		members[i].printPerson();
	}
	myfile.close();
	system("pause");
	return 0;
}

/*
Output:
Name: Herold, Jill
Person Number: 1
Person ID: 2234
Gender: F
Street address number: 12 320019
Street Name: Main St. Washington, DC
Interest 1: yoga
Interest 2: facebook

Name: Jackson, Stan
Person Number: 2
Person ID: 3748
Gender: M
Street address number: 12 30229
Street Name: Douglas Ave. Baltimore, MD
Interest 1: sports
Interest 2: movies

Name: Jerry, Francis
Person Number: 3
Person ID: 6666
Gender: M
Street address number: 23 4544040
Street Name: 6th Street Woodbridge, VA
Interest 1: movies
Interest 2: roadtrips

Name: Joan, Wilson
Person Number: 4
Person ID: 1234
Gender: F
Street address number: 12 20019
Street Name: Georgia Ave. Washington, DC
Interest 1: romance
Interest 2: dining

Name: Smith, Stanley
Person Number: 5
Person ID: 3456
Gender: M
Street address number: 56 30229
Street Name: D Street Baltimore, MD
Interest 1: movies
Interest 2: dining

Name: Claire, Claude
Person Number: 6
Person ID: 2311
Gender: F
Street address number: 66 44040
Street Name: 32nd Street Woodbridge, VA
Interest 1: cooking
Interest 2: facebook
*/
