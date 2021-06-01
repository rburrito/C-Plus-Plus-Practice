#include <iostream>
#include <stdio.h>
#include <algorithm>


int main()
{
    int userInput[40];

    std::cout<< "Printed in original order"<<"\n";
    for(int i = 0; i <= 40; i++)
    {
    int number;

    scanf("%d", &userInput[i]);
    std::cout<<userInput[i]<<" ";
    }

     std::cout<< "\n\nPrinted in reverse order"<<"\n";
    for (int i=40; i >= 0; i--){

      std::cout<< userInput[i] <<" ";
    }


    std::cout<< "\n\nPrinted in sorted order"<<"\n";
  //   std::sort(userInput, userInput + 40); // manipulates final array;
  // Simple sorting algorithm instead of using sort method
     for(int i = 0; i < 40; i++)
         {
             for(int j = 0; j < 39 - i; j++)
                 {
                     if(userInput[j] > userInput[j + 1])
                     {
                         int temp;
                         temp=userInput[j];
                         userInput[j]=userInput[j + 1];
                         userInput[j + 1]=temp;
                     }
                 }

    for (int i=0; i<= 40; i++){

        std::cout<< userInput[i]<< "\n";
    }

    return 0;
}
