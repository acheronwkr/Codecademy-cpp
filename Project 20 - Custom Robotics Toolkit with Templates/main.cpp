#include "functions.hpp"
#include "DataHolder.hpp"

using namespace std;

void runToolkitDemo() {
  cout << "The midpoint is: " << midpoint(100, 200) << endl;

  string part1 = "chassis";
  string part2 = "engine";
  swapValues(part1, part2);
  cout << "The strings after swap are: " << part1 << " and " << part2 << endl;

  DataHolder specialNumber(2.71, 1.618, 9.8);
  cout << "The special number is: " << specialNumber.getValue() << endl;

  DataHolder<string> robotName("Codey the Robot");
  cout << "The robot's name is: " << robotName.getValue() << endl;
}

int main() {
  cout << "The midpoint is: " << midpoint(10, 20) << endl;
  cout << "The midpoint is: " << midpoint(2.71, 3.14) << endl;

  int firstNumber = 5;
  int secondNumber = 10;
  swapValues(firstNumber, secondNumber);
  cout << "The numbers after swap are: " << firstNumber << " and " << secondNumber << endl;

  string greeting = "hello";
  string planet = "world";
  swapValues(greeting, planet);
  cout << "The strings after swap are: " << greeting << " and " << planet << endl;

  DataHolder testNumber(42, 0, 100);
  testNumber.setValue(75); // Testing number within the range
  testNumber.setValue(150); // Testing number exceeding the range

  DataHolder<string> testString("robotics lab");
  cout << "The test string is: \"" << testString.getValue() << "\"" << endl;

  cout << endl;

  runToolkitDemo();
}
