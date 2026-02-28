/*
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main() {

    srand (time(NULL));
    int computer = rand() % 3 + 1;

    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";

    std::cin >> user;

    if (user == 1 && computer == 1 || user == 2 && computer == 2 || user == 3 && computer == 3) {
        std::cout << "Computer selects: " << computer << "!\n";
        std::cout << "User selects: " << user << "!\n";
        std::cout << "It's a tie!\n";
    }
    else if (user == 1 && computer == 2 || user == 2 && computer == 3 || user == 3 && computer == 1) {
        std::cout << "Computer selects: " << computer << "!\n";
        std::cout << "User selects: " << user << "!\n";
        std::cout << "Computer won!\n";
    }
    else if (user == 2 && computer == 1 || user == 3 && computer == 2 || user == 1 && computer == 3) {
        std::cout << "Computer selects: " << computer << "!\n";
        std::cout << "User selects: " << user << "!\n";
        std::cout << "User won!\n";
    }
}