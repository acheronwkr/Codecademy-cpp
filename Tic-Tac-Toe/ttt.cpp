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
    vector<char> playground(9, ' ');
    char player = 'X';
    int position;
    int round = 1;
    bool gameOver = false;
    bool checkStatus = false;

    cout << "-------------------" << endl;
    cout << "= TIC - TAC - TOE =" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    cout << "Here are the instruction for the game:" << endl;
    cout << "As you can see bellow the board is a 3x3 grid, where each cell is numbered from 1 to 9, where 1 is the top left corner and 9 is the bottom right corner." << endl;
    cout << " " << playground[0] << " | " << playground[1] << " | " << playground[2] << "       1 | 2 | 3 " << endl;
    cout << "---|---|---" << "     ---|---|---" << endl;
    cout << " " << playground[3] << " | " << playground[4] << " | " << playground[5] << "       4 | 5 | 6 " << endl;
    cout << "---|---|---" << "     ---|---|---" << endl;
    cout << " " << playground[6] << " | " << playground[7] << " | " << playground[8] << "       7 | 8 | 9 " << endl;
    cout << endl;
    cout << "Players take turns to place their X or O on the board by entering the coresponding number of the cell." << endl;
    cout << "GGHF" << endl;

    while (!gameOver) {

        drawBoard(playground);
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> position;
        position--; // Since the board is starting from 0 index we simply decrement the position by 1 from the user input so it fiits the 0-8 index of the board.

        // Check whether the move is valid by checking the 0-8 range and if the position is not already taken by another player.
        if (position >= 0 && position < 9 && playground[position] == ' ') {
            playground[position] = player;

            // Check rows to see if one of the players has won.
            if ((playground[0] != ' ' && playground[0] == playground[1] && playground[1] == playground[2]) || 
                (playground[3] != ' ' && playground[3] == playground[4] && playground[4] == playground[5]) || 
                (playground[6] != ' ' && playground[6] == playground[7] && playground[7] == playground[8])) {
                    gameOver = true;
                    checkStatus = true;
            // Check columns to see if one of the players has won.
            } else if ((playground[0] != ' ' && playground[0] == playground[3] && playground[3] == playground[6]) || 
                       (playground[1] != ' ' && playground[1] == playground[4] && playground[4] == playground[7]) || 
                       (playground[2] != ' ' && playground[2] == playground[5] && playground[5] == playground[8])) {
                            gameOver = true;
                            checkStatus = true;
            // Check diagonals to see if one of the players has won.
            } else if ((playground[0] != ' ' && playground[0] == playground[4] && playground[4] == playground[8]) || 
                       (playground[6] != ' ' &&playground[6] == playground[4] && playground[4] == playground[2])) {
                            gameOver = true;
                            checkStatus = true;
            } else if (round == 9) {
                checkStatus = false;
                gameOver = true;
            }
            round++;
            if (!gameOver) {
                if (player == 'X') {
                    player = 'O';
                } else {
                    player = 'X';
                }
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