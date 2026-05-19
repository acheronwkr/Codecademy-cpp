#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, int health, int power) : Character(name, health, power){}

void Sorcerer::attack() {
  std::cout << "Cast a spell!" << std::endl;
}
