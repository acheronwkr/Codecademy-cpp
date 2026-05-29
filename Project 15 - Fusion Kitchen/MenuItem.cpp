#include "MenuItem.hpp"
#include <iostream>
#include <iomanip>

void MenuItem::display() const {
  std::cout << std::fixed << std::setprecision(2);
  std::cout << name << " - $" << price << std::endl;
}