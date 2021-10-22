#include <iostream>
#include <string>
using namespace std;

int main(){
  string userInput;

  cout << "Enter a string: ";
  cin >> userInput;
  cout << endl;

  cout << "The size of this string is " << userInput.size() << endl;
  cout << "The length of this string is " << userInput.length() << endl;

  for (int i = 0; i < userInput.size(); i++){
    cout << userInput[i] << endl;
  }

  return 0;
}
