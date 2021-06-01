/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

cout<< "Provide an integer. ";
cin>>givenInt;
int * pointerTogivenInt = &givenInt;
cout<< givenInt<<", ";
cout << pointerTogivenInt<<"\n";

cout<< "Provide a float. ";
cin>> givenFloat;
float * pointerTogivenFloat = &givenFloat;
cout<< givenFloat<<", ";
cout << pointerTogivenFloat<<"\n";


cout<< "Provide a double. ";
cin>>givenDouble;
cin.ignore();
double * pointerTogivenDouble = &givenDouble;
cout<< givenDouble<<", ";
cout<< pointerTogivenDouble<<"\n";

cout<< "Provide a string. ";
getline(cin, givenString);
std::string * pointerTogivenString = &givenString;
cout<< givenString<<", ";
cout<< pointerTogivenString<<"\n";


// char referencing is special.
cout<<"Provide a character. ";
cin>> givenChar;
char * pointerTogivenChar = NULL;
pointerTogivenChar = &givenChar; // additional step
cout<< givenChar<<", ";
cout<< &pointerTogivenChar<<"\n"; // needs & in front of declared pointer to display memory address
cout<< *pointerTogivenChar<<"\n"; // dereferences the pointer and provides the value of givenChar
cout<< static_cast<void *>(&givenChar)<<"\n";
}


/*

Udacity method

#include<iostream>
#include<string>

int main ()
{
  int * pointerI;
  int number;
  char character;
  char * pointerC;
  std::string sentence;
  std::string *pointerS;

  pointerI = &number;
  *pointerI = 45;

  pointerC = &character;
  *pointerC = 'f';

  pointerS = &sentence;
  *pointerS = "Hey look at me, I know pointers!";

  std::cout << "number = "<<number<<"\n";
  std::cout<<"character = "<<character<<"\n";
  std::cout<<"sentence = "<<sentence<<"\n";

  return 0;
}
*/
