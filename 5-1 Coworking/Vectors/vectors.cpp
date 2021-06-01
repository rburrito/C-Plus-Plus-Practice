/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> makeNumbersVector(string numlist){
  string s="";
  vector <int> numbersVector;

  for (int i=0; i < numlist.length(); i=i+1){
      if(numlist[i] != ' ') {
          s= s+numlist[i];
      }

      if (numlist[i+1]==' ' || i+1==numlist.length()) {
        int num = stoi(s); // converts string into a number;
        numbersVector.push_back(num);
        s="";
      }
  }
  return numbersVector;
}

int averageOfVector(vector <int> numberVector){
  int sum=0;
  float average;
  for (int i=0; i < numberVector.size(); i++){
    sum+=numberVector[i];
  }

  average = sum/numberVector.size();
  return average;
}
