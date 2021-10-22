/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog {
    string name;
    int license;
    public:
        Dog();
        Dog(string nameIn);
        Dog(int licenseNum);
        Dog(string nameIn, int licenseNum);
        int getLicense();
        string getName();
        ~Dog();
};
