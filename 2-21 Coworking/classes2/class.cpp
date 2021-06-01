#include <string>
#include "class.hpp"

Country::Country(std::string new_country, int new_population)
: country(new_country), population(new_population) {}

ls
std::string Country::get_country() {
  return country;
}

int Country::get_population(){
  return population;
}
