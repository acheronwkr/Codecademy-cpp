// Tic Tac Toe Game

#include <iostream>
#include <vector>

using namespace std;

void drawBoard(const vector<char>& playground) {
        cout << " " << playground[0] << " | " << playground[1] << " | " << playground[2] << endl;
        cout << "---|---|---" << endl;
        cout << " " << playground[3] << " | " << playground[4] << " | " << playground[5] << endl;
        cout << "---|---|---" << endl;
        cout << " " << playground[6] << " | " << playground[7] << " | " << playground[8] << endl;
    }

int main () {
    vector<char> playground = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char player = 'X';
    int position;
    int round = 1;
    bool gameOver = false;
    bool checkStatus = false;

    while (!gameOver) {

        drawBoard(playground);
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> position;
        position--; // Since the board is starting from 0 index we simply decrement the position by 1 from the user input so it fiits the 0-8 index of the board.

        // Check whether the move is valid by checking the 0-8 range and if the position is not already taken by another player.
        if (position >= 0 && position < 9 && playground[position] != 'X' && playground[position] != 'O') {
            playground[position] = player;

            // Check rows to see if one of the players has won.
            if ((playground[0] == playground[1] && playground[1] == playground[2]) || 
                (playground[3] == playground[4] && playground[4] == playground[5]) || 
                (playground[6] == playground[7] && playground[7] == playground[8])) {
                    gameOver = true;
                    checkStatus = true;
            } else if ((playground[0] == playground[3] && playground[3] == playground[6]) || 
                    (playground[1] == playground[4] && playground[4] == playground[7]) || 
                    (playground[2] == playground[5] && playground[5] == playground[8])) {
                            gameOver = true;
                            checkStatus = true;
            } else if ((playground[0] == playground[4] && playground[4] == playground[8]) || 
                    (playground[6] == playground[4] && playground[4] == playground[2])) {
                            gameOver = true;
                            checkStatus = true;
            } else if (round == 9) {
                checkStatus = false;
                gameOver = true;
            }
            round++;

            if (player == 'X') {
                player = 'O';
            } else {
                player = 'X';
            }
        } else {
            cout << "You can't place here. Please try again." << endl;
        }
    }
    
    // Printing the final board and declaring the winner or calling a tie.
    if (checkStatus) {
        drawBoard(playground);
        cout << "Player with the " << player << " just won the game" << endl;
        cout << "Thanks for playing. Bóbr Borys!" << endl;
    } else {
        drawBoard(playground);
        cout << "There was no winner. The game resulted in a tie." << endl;
        cout << "Thanks for playing. Good luck next time!" << endl;
        cout << "Thanks, Bóbr Borys!" << endl;
    }
}