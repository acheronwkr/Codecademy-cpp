#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

using namespace std;

class Character {
protected:
  string name;
  int health;
  int power;
  
public:
  Character();
  Character(string name, int health, int power);
  virtual void attack();
  virtual void displayInfo();
};

#endif
