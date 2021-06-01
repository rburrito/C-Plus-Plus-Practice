
#include <iostream>
#include <string>
using namespace std;  // put this before the dog.cpp file if you are not putting an addition 'using namespace std in there'. 
#include "dog.cpp"



void printRoster(Dog roster[], int size);  // passing declared class Dog to an outside function

void printRoster(Dog roster[], int size)
{
 for (int i=0; i < size; i++){
     roster[i].printInfo();
     cout<<"\n\n";
 }
}
