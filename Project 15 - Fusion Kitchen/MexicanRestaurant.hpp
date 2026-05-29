#ifndef MEXICAN_RESTAURANT_HPP
#define MEXICAN_RESTAURANT_HPP

#include "Restaurant.hpp"
using namespace std;

class MexicanRestaurant : virtual public Restaurant {
private:
  int spiceLevel;

public:
  void setSpiceLevel(int spiceLevel);
  void setMexRestaurant(string nme, string addr, int spiceLevel);
  void describeCuisine();
};

#endif