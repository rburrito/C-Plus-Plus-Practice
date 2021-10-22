#include "main.hpp"

int main(void)
{
   Shape sh1(4, 4);    // Declare shape1
   Shape sh2(2, 6);    // Declare shape2
   Shape sh3;          //Declare shape3

   int total = sh1 + sh2;  // the + operator has been declared in main.hpp to add the two lengths and widths together and find the area of the new shape.
   cout << "\nsh1.Area() = " << sh1.Area();
   cout << "\nsh2.Area() = " << sh2.Area();
   cout << "\nTotal = "<<total;
   return 0;
}
