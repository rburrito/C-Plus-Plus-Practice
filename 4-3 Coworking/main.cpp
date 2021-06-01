/*Fix the errors and get an error free compilation and execution.*/

#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int coEff1, coEff2, constant;
    int ex1, ex2;
    int y;
    int x;
    ifstream inFile;
    inFile.open("input.txt");
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    cout<<"What is the first coefficient? ";
    cin>>coEff1;
    cout<<coEff1<<"\n";
    cout<<"What is the exponent of the first term? ";
    cin>>ex1;
    cout<<ex1<<"\n";
    cout<<"What is the second coefficient? ";
    cin>>coEff2;
    cout<<coEff2<<"\n";
    cout<<"What is the exponent of the second term? ";
    cin>>ex2;
    cout<<ex2<<"\n";
    cout<<"What is the constant? ";
    cin>>constant;
    cout<<constant<<"\n";
    //Print the complete equation
    cout<<"The polynomial we are solving is:\n";
    cout<<"\t"<<coEff1<<" *x^"<<ex1<<" + "<<coEff2<<" *x^"<<ex2<<" + "<<constant;
    cout<<"\nWhat is the value of x?";
    cin>>x;
    cout<<x<<"\n";
    //Solve the equation with the given x
    y = coEff1 * pow(x,ex1) + coEff2 * pow(x,ex2)+constant;
    cout<<"y = "<<coEff1<<" * "<<x<<"^"<<ex1<<"  + "<<coEff2<<" * "<<x<<"^"<<ex2 << " + " <<constant<<" = "<<y;
    return 0;
}
