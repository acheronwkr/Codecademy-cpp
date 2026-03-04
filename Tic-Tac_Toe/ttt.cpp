// Tic Tac Toe Game

#include <iostream>
#include <vector>

using namespace std;

void displayBoard(const vector<char>& board) {
        cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
        cout << "---|---|---" << endl;
        cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
        cout << "---|---|---" << endl;
        cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
    }

int main () {
    vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char player = 'X';
    int move;
    bool gameOver = false;

    while (!gameOver) {
        displayBoard(board);
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;
        move--; // Since the board is starting from 0 index we simply decrement the move by 1 from the user input so it fiits the 0-8 index of the board
        
    }


}