#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <string>
using namespace std;

class MenuItem {
private:
  string name;
  double price;

public:
  MenuItem() {}
  MenuItem(const std::string& name, double price) : name(name), price(price) {}
  void display() const;
};

#endif