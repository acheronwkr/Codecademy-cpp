#include <iostream>
#include <string>

#include "func.hpp"

using namespace std;

int main() {

  string word = "broccoli";
  string text = "I don't like broccoli, because broccoli is tasteless, so broccoli is like cauliflower but greener.";

  bleep(word, text);

  cout << text << endl;

}
