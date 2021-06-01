/*Goal: create a function that searches an array for
**a given value.
*/

#include<iostream>

int search(int *numArray, int sze, int key);

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *numArray, int sze, int key){  // passes an array by reference because C++ does not allow arrays to be passed into functions. Need to be passed in as reference
    for (int i=0; i < sze; i++){
        if (numArray[i] == key){

            return i;
        }
    }

    return -1;
}

// Another way to pass arrays into a function: int search(int numArray[3], int sze, int key);
// int search(int numArray[], int sze, int key); if unsized
