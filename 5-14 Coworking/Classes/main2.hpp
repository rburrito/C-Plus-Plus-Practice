/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include <iostream>
using namespace std;

class Cat {
    std::string name;
    std::string breed;
    int age;

    public:
        void setName(std::string nameIn);
        void setBreed(std::string breedIn);
        void setAge(int ageIn);
        std::string getName();
        std::string getBreed();
        int getAge();
        void printInfo();
};

void Cat::setName(std::string nameIn){
    name = nameIn;
}

void Cat::setBreed(std::string breedIn){
    breed = breedIn;
}

void Cat::setAge(int ageIn){
    age=ageIn;
}

string Cat::getName(){
    return name;
}

std::string Cat::getBreed(){
    return breed;
}

int Cat::getAge(){
    return age;
}

void Cat::printInfo(){
    cout << name << " " << breed << " " << age << endl;
}
