#include "JapaneseRestaurant.hpp"
#include <iostream>

void JapaneseRestaurant::setHasTatami(bool tatamiAvailable) {
  this->hasTatami = tatamiAvailable;
}

void JapaneseRestaurant::setJapRestaurant(string name, string addr, bool tatamiAvailable) {
  Restaurant::setRestaurant(name, addr);
  this->hasTatami = tatamiAvailable; 
}

void JapaneseRestaurant::describeCuisine() {
  if (hasTatami) {
    std::cout << "Traditional Japanese cuisine with tatami seating available" << std::endl;
  } else {
    std::cout << "Traditional Japanese cuisine" << std::endl;
  }
}