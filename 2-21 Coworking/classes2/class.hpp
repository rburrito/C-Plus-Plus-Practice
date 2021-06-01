#include <string>

class Country{
  std::string country;
  int population;

  public:

    Country(std::string new_country, int new_population);

    std::string get_country();
    int get_population();

  
};
