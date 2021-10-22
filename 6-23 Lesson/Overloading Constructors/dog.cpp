#include "main.hpp"

Dog::Dog(){
    name = "NA";
    license = 0;
}

Dog::Dog(string nameIn){
    name = nameIn;
}

Dog::Dog(int licenseNum){
    license = licenseNum;
}

Dog::Dog(string nameIn, int licenseNum){
    name = nameIn;
    license = licenseNum;
}

int Dog::getLicense(){
    return license;
}

string Dog::getName(){
    return name;
}

Dog::~Dog(){

    cout<<"Deleting dog(s).\n";
}
