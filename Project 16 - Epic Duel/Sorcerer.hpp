#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Character.hpp"

class Sorcerer : public Character {
public:
  Sorcerer(std::string name, int health, int power);
  void attack() override;
};

#endif
