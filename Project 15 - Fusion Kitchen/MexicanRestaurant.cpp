#include "MexicanRestaurant.hpp"
#include <iostream>

void MexicanRestaurant::setSpiceLevel(int spiceLevel) {
  this->spiceLevel = spiceLevel;
}

void MexicanRestaurant::setMexRestaurant(std::string nme, std::string addr, int spiceLevel) {
  Restaurant::setRestaurant(nme, addr);
  this->spiceLevel = spiceLevel;
}

void MexicanRestaurant::describeCuisine() {
  std::cout << "Authentic Mexican cuisine with spice level " << spiceLevel << " out of 5" << std::endl;
}