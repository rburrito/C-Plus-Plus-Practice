#include <iostream>
#include "song.hpp"

int main() {

  Song back_to_black("Back to Black", "Amy Winehouse");

 std::cout <<back_to_black.get_artist()<<"\n";
 std::cout<<back_to_black.get_title()<<"\n";



}

/*Error
In file included from main.cpp:2:
song.hpp:17:3: error: extra qualification ‘Song::’ on member ‘Song’ [-fpermissive]
   17 |   Song::~Song();
      |   ^~~~
In file included from song.cpp:1:
song.hpp:17:3: error: extra qualification ‘Song::’ on member ‘Song’ [-fpermissive]
   17 |   Song::~Song();
      |   ^~~~

*/
