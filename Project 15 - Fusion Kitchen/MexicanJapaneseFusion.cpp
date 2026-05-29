#include "MexicanJapaneseFusion.hpp"
#include <iostream>

void MexicanJapaneseFusion::setMexJapRestaurant(std::string mjn, std::string addr, int spiceLevel, bool tatamiAvailable){
  Restaurant::setRestaurant(mjn, addr);
  setSpiceLevel(spiceLevel);
  setHasTatami(tatamiAvailable);
}

void MexicanJapaneseFusion::describeCuisine() {
  std::cout << "A unique fusion of Mexican and Japanese cuisines" << std::endl;
}

void MexicanJapaneseFusion::displaySpecialty() {
  std::cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!" << std::endl;
}