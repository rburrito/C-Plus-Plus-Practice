#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    int findSmaller(int input1, int input2, int input3);
    int findSmaller(int arr[], int size);
    float findSmaller(float input1, float input2);
    float findSmaller(float input1, float input2, float input3);
    float findSmaller(float arr[], int size);
    char findSmaller(char input1, char input2);
    char findSmaller(char input1, char input2, char input3);
    char findSmaller(char arr[], int size);

};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    int arr[3]={input1, input2, input3};
    int smallestNum = arr[0];
    for (int i=0; i<3; i++){
        if (arr[i] < smallestNum){
            smallestNum = arr[i];
        }
    }
    return smallestNum;
}

int Compare::findSmaller(int arr[], int size)
{
    int smallestNum = arr[0];
    for (int i=0; i < size; i++){
        if (arr[i] < smallestNum){
            smallestNum = arr[i];
        }

    }

    return smallestNum;
}

float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    float arr[3]={input1, input2, input3};
    float smallestNum = arr[0];
    for (int i=0; i<3; i++){
        if (arr[i] < smallestNum){
            smallestNum = arr[i];
        }
    }
    return smallestNum;
}


float Compare::findSmaller(float arr[], int size)
{
    float smallestNum = arr[0];
    for (int i=0; i < size; i++){
        if (arr[i] < smallestNum){
            smallestNum = arr[i];
        }

    }
    return smallestNum;
}


char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}


char Compare::findSmaller(char input1, char input2, char input3)
{
    char arr[3]= {input1, input2, input3};
    char smallestLetter = arr[0];
    for (int i=0; i < 3; i++){
        if (arr[i] < smallestLetter){
            smallestLetter = arr[i];
        }

    }
    return smallestLetter;
}



char Compare::findSmaller(char arr[], int size)
{
     char smallestLetter = arr[0];
    for (int i=0; i < size; i++){
        if (arr[i] < smallestLetter){
            smallestLetter = arr[i];
        }

    }
    return smallestLetter;
}
