
#include <string>
#include <iostream>
#include <vector>
#include "vectors.hpp"
using namespace std;

int main(){

    string numbersList;
    vector <int> numVector;
    int average;

    cout << "Enter a list of numbers: ";
    // scanf("%d", &numVector[i]); reads data from standard in and stores it in the pointer of the array index. %d is a digit but can be used with strings as well.
    // with scanf, you don't need to use getline and get a numbersList
    getline(cin, numbersList);

    numVector =makeNumbersVector(numbersList);
    average = averageOfVector(numVector);
    cout<< "The average of the numbers is " << average<< endl;
    return 0;
