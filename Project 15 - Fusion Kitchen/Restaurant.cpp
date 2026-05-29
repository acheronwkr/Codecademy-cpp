#include "Restaurant.hpp"
#include <iostream>

void Restaurant::setRestaurant(std::string n, std::string addr) {
  this->name = n;
  this->address = addr;
}

void Restaurant::displayInfo() {
  std::cout << "Restarurant's name: " << name << std::endl;
  std::cout << "Restaurant's address: " << address << std::endl;
}

void Restaurant::describeCuisine() {
  std::cout << "This restaurant serves various types of cuisines." << std::endl;
}

void Restaurant::addMenuItem(MenuItem item) {
  menu.push_back(item);
}

void Restaurant::displayMenu() {
  std::cout << name << " Menu: " << std::endl;
  for (const auto& item : menu) {
    item.display();
  }
}