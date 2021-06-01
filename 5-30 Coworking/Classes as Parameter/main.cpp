/**Create an array called roster, populate it
**with multiple instances of Dog, it has a size of SIZE.
**The create a function called
**printRoster(roster, SIZE) that will print
**all the information about all the dogs on the roster.
*/

#include "main.hpp"

int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    const int SIZE = 5;

    Dog roster[SIZE];

    roster[0].setName("Spot");
    roster[1].setName("Piggle");
    roster[2].setName("Shoehorn");
    roster[3].setName("Mooface");
    roster[4].setName("Jingle");

    roster[0].setLicenseNumber(100);
    roster[1].setLicenseNumber(200);
    roster[2].setLicenseNumber(300);
    roster[3].setLicenseNumber(400);
    roster[4].setLicenseNumber(500);

    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}
