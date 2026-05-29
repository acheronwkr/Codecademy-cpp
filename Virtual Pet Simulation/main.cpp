#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "MagicPet.hpp"
#include <iostream>
#include <vector>
#include <memory> // for smart pointers
using namespace std;

int main() {

  Dog myDog;
  Cat myCat;
  MagicPet myMagicPet;

  myDog.setName("Snowy");
  myDog.setAge(5);

  myCat.setName("Garfield");
  myCat.setAge(7);

  myMagicPet.setName("Bober");
  myMagicPet.setAge(14);
  
  vector<Pet*> pets;
  pets.push_back(&myDog);
  pets.push_back(&myCat);
  pets.push_back(&myMagicPet);

  for (Pet* pet : pets) {
    pet->makeSound();
    MagicPet* magicPet = dynamic_cast<MagicPet*>(pet);
    if (magicPet) {
      magicPet->doTrick();
    }
  }



  return 0;
}
