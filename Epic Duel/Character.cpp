#include "Character.hpp"

Character::Character() {
  name = "Elden King";
  health = 100;
  power = 10;
}

Character::Character(std::string name, int health, int power){
  this->name = name;
  this->health = health;
  this->power = power;
}

void Character::attack(){
  std::cout << "Basic Low Attack" << std::endl;
}

void Character::displayInfo(){
  std::cout << "Name: " << name << ", Health: " << health << ", Power: " << power << std::endl;
}
