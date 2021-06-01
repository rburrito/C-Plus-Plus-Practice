#include <string>

class Song {

  std::string title;
  std::string artist;

public:

  Song(std::string new_title, std::string new_artist); // This is a way of immediately passing values upon instantiating a new class of objects.

  // Add a destructor here:
  ~Song();   // If I remove the destructor, there are no issues compiling. I do not need a destructor unless I am pointing to something.

  std::string get_title();

  std::string get_artist();



};
