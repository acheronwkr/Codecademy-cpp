#include <iostream>
#include <vector>

using namespace std;

// Function for welcome message
void welcome() {
    cout << "===================" << endl;
    cout << "= TIC - TAC - TOE =" << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Here are the instructions for the game:" << endl;
    cout << "As you can see bellow the board is a 3x3 grid, where each cell is numbered from 1 to 9, where 1 is the top left corner and 9 is the bottom right corner." << endl;
    cout << "   |   |   " << "             1 | 2 | 3 " << endl;
    cout << "---|---|---" << "     ->     ---|---|---" << endl;
    cout << "   |   |   " << "     ->      4 | 5 | 6 " << endl;
    cout << "---|---|---" << "     ->     ---|---|---" << endl;
    cout << "   |   |   " << "             7 | 8 | 9 " << endl;
    cout << endl;
    cout << "Players take turns to place their X or O on the board by entering the coresponding number of the cell." << endl;
    cout << "GGHF" << endl;
    cout << endl;
}

// Function for drawing the board
void drawBoard(const vector<char>& playground) {
        cout << " " << playground[0] << " | " << playground[1] << " | " << playground[2] << endl;
        cout << "---|---|---" << endl;
        cout << " " << playground[3] << " | " << playground[4] << " | " << playground[5] << endl;
        cout << "---|---|---" << endl;
        cout << " " << playground[6] << " | " << playground[7] << " | " << playground[8] << endl;
}

// Function for checking the win condition
bool checkWin(const vector<char>& playground) {
    // Check rows to see if one of the players has won.
    if ((playground[0] != ' ' && playground[0] == playground[1] && playground[1] == playground[2]) || 
        (playground[3] != ' ' && playground[3] == playground[4] && playground[4] == playground[5]) || 
        (playground[6] != ' ' && playground[6] == playground[7] && playground[7] == playground[8])) {
            return true;
    // Check columns to see if one of the players has won.
    } else if ((playground[0] != ' ' && playground[0] == playground[3] && playground[3] == playground[6]) || 
               (playground[1] != ' ' && playground[1] == playground[4] && playground[4] == playground[7]) || 
               (playground[2] != ' ' && playground[2] == playground[5] && playground[5] == playground[8])) {
                    return true;
    // Check diagonals to see if one of the players has won.
    } else if ((playground[0] != ' ' && playground[0] == playground[4] && playground[4] == playground[8]) || 
               (playground[6] != ' ' &&playground[6] == playground[4] && playground[4] == playground[2])) {
                    return true;
    } else {
        return false;
    }
}