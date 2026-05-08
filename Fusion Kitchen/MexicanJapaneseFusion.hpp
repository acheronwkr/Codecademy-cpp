#ifndef MEXICAN_JAPANESE_FUSION_HPP
#define MEXICAN_JAPANESE_FUSION_HPP

#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "Restaurant.hpp"
using namespace std;

class MexicanJapaneseFusion : public MexicanRestaurant, public JapaneseRestaurant {
public:
  void setMexJapRestaurant(string mjn, string addr, int spiceLevel, bool tatamiAvailable);
  void describeCuisine();
  void displaySpecialty();
};

#endif