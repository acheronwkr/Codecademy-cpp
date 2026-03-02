#include <iostream>
#include "ufo_func.hpp"

int main() {

  greet(); // Greeting and providing instructions

  // Declaration of basic variables
  std::string codeword = "codecademy";
  std::string answer = "__________";
  std::vector<char> incorrect;
  char letter;
  int misses = 0;
  bool guess = false;

  // Checking if player guessed the word
  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;
    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess == true) {
      std::cout << "\nCorrect!\n";
    } else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  end_game(answer, codeword); // Calling end game sentences.

}
