#include <iostream>
#include <stdio.h>
#include <string>

// Practice separating declaring and defining functions

// Declared functions
int findKey(int key, int array[]);
std::string returnString(int location, int key);


int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location;
    //TODO: write code to determine if integers entered by
    //the user are in searchArray
    while (1){
      std::cout<<"Enter an integer. Enter -1 to quit. \n";
      scanf("%d", &searchKey);
      if (searchKey == -1){
        return 0;
      }
      location = findKey(searchKey, searchArray);
      std::cout<< returnString(location, searchKey);
    }
    return 0;
}

// Defined functions
int findKey(int key, int array[]){
    for (int i=0; i < 10; i++){
      //  std::cout<< "key: " << key << ", location: " << i<<", number: "<<array[i]<<"\n";
        if(key == array[i]){
            return i;
        }
    }
    return -1;
}

std::string returnString(int location, int key){
  std::string sentence;
  if (location != -1){
    sentence =std::to_string(key) + " is at location " + std::to_string(location) + " in the array.\n\n";
    return sentence;
  }
    return  "The number you entered is not in the array.\n\n";
}
