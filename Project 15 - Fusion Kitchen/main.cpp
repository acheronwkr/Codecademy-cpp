#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
  cout << "Testing Restaurant Inheritance Hierarchy:" << endl;
  cout << endl;
  
  MexicanRestaurant laCasa;
  laCasa.setMexRestaurant("La Casa", "123 Spice Lane", 4);
  laCasa.addMenuItem(MenuItem("Tacos", 8.99));
  laCasa.addMenuItem(MenuItem("Enchiladas", 12.99));

  JapaneseRestaurant sakura;
  sakura.setJapRestaurant("Sakura", "456 Sushi Road", true);
  sakura.addMenuItem(MenuItem("Sushi Roll", 14.99));
  sakura.addMenuItem(MenuItem("Ramen", 11.99));

  MexicanJapaneseFusion fusionFiesta;
  fusionFiesta.setMexJapRestaurant("Fusion Fiesta", "789 Fusion Ave", 3, true);
  fusionFiesta.addMenuItem(MenuItem("Sushi Tacos", 15.99));
  fusionFiesta.addMenuItem(MenuItem("Wasabi Guacamole", 7.99));

  laCasa.displayInfo();
  laCasa.describeCuisine();
  laCasa.displayMenu();
  cout << endl;

  sakura.displayInfo();
  sakura.describeCuisine();
  sakura.displayMenu();
  cout << endl;

  fusionFiesta.displayInfo();
  fusionFiesta.describeCuisine();
  fusionFiesta.displaySpecialty();
  fusionFiesta.displayMenu();
  cout << endl;

  return 0;
}