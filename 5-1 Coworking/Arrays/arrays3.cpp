/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array array = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
**and a vector of size 4.  vector =[num1, num2, num3, num4]
**Use the dot product to multiply the array by the vector. product =[prod1, prod2, prod3, prod4]
**Print the resulting vector.
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector
    const int row=4;
    const int col=4;
    int array[row][col];
    int vector[row], product[row];
    int sum;

    for(int i=0; i < row; i++){
        std::cout<<"Enter "<< row << " numbers for row "<<i<<"\n";
        for(int j=0; j < row; j++){

            std::cin >> array[i][j];
            std::cout<<array[i][j]<<"\n";
        }
    }

    for(int i=0; i < row; i++){
        std::cout<<"Enter " << row <<" vector values\n";
            std::cin>>vector[i];
            std::cout<<vector[i]<<"\n";

    }

    sum=0;

    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            sum += array[i][j]*vector[i];
        }
        product[i]=sum;
        std::cout<<product[i]<<std::endl;
        sum=0;
    }

    for(int i=0; i< row; i++){

        std::cout<<"Product "<<i+1<<": "<<product[i]<<std::endl;
    }

    return 0;
}
