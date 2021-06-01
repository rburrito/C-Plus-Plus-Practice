#include "song.hpp"
#include <iostream>

Song::Song(std::string new_title, std::string new_artist)
  : title(new_title), artist(new_artist) {} // This is a way of immediately passing values upon instantiating a new class of objects.

// add the Song destructor here:

 Song::~Song(){
    std::cout<<"Goodbye "<<title<<"!";
    // Removing this destructor definition allows the code to compile because I am not using a pointer.
  }


std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}
