#include "Warrior.hpp"

Warrior::Warrior(std::string name, int health, int power) : Character(name, health, power){}

void Warrior::attack() {
  std::cout << "Swings a might sword!" << std::endl;
}

void Warrior::specialAttack() {
  std::cout << name << " a devastating double stike!" << std::endl;
}
