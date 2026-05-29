#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP
#include "MenuItem.hpp"
#include <string>
#include <vector>
using namespace std;

class Restaurant {
private:
  string name;
  string address;
protected:
  vector<MenuItem> menu;
public:
  void setRestaurant(string n, string addr);
  void displayInfo();
  void describeCuisine();
  void addMenuItem(MenuItem item);
  void displayMenu();
};

#endif