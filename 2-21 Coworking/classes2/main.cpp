#include <iostream>
#include <string>
#include "class.hpp"


int main() {

 Country egypt("Egypt", 5000000);

 std::cout << egypt.get_country() << std::endl;
 std::cout << egypt.get_population() << std::endl;
 
}
