/*The header file for main.cpp*/
#include <iostream>
using namespace std;

float calculate(float input1, float input2, char operation, float &result); // pass by reference added to modify the parameter named result

void printEquation(float input1, float input2, char operation, float result);

float calculate(float input1, float input2, char operation, float &result){ // pass by reference added to modify the parameter named result
    if (operation == '+'){
        result = input1 + input2;
    } else if (operation == '-'){
        result = input1 - input2;
    } else if (operation == '*'){
        result = input1 * input2;
    } else {
        result = input1 / input2;
    }
    return result;
}

void printEquation(float input1, float input2, char operation, float result){
    cout<<input1 <<" "<<operation<<" "<<input2<<" = "<<result<<endl;
}
