/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "main.hpp"
using namespace std;

int main(){
    Cat cat1;

    cat1.setName("Shoehorn");
    cat1.setBreed("tiger");
    cat1.setAge(15);

    cout<<"Cat name: "<< cat1.getName() << endl;
    cout<<"Breed: "<< cat1.getBreed() << endl;
    cout<<"Age: "<< cat1.getAge()<< endl;

    cat1.printInfo();

    return 0;
}
