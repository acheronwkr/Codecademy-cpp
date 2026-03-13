#include <string>
#include "bleep_func.hpp"

void bleep(std::string word, std::string &text) {
  
  int match = text.find(word);

  while (match != -1) {
    for (int i = 0; i < word.length(); i++) {
      text[match + i] = '*';
    }
    match = text.find(word, match + word.length());
  }
}
