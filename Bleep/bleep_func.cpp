#include <string>
#include "bleep_func.hpp"

void bleep(const std::string& word, std::string& text) {
  
  size_t match = text.find(word);

  while (match != std::string::npos) {
    for (size_t i = 0; i < word.length(); i++) {
      text[match + i] = '*';
    }
    match = text.find(word, match + word.length());
  }
}