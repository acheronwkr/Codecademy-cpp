#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {

  vector<Character*> characters;

  characters.push_back(new Warrior("Boras", 200, 100));
  characters.push_back(new Sorcerer("Bobrys", 100, 150));

  for (Character* character : characters) {
    character->attack();
    character->displayInfo();
  }

  Character* characterPtr = new Warrior("Bober", 80, 200);
  Warrior* warriorPtr = dynamic_cast<Warrior*>(characters[0]);
  if (warriorPtr) {
    warriorPtr->specialAttack();
  }

  for (int i = 0; i < characters.size(); i++) {
    delete characters[i];
  }
  characters.clear();

  return 0;
}
