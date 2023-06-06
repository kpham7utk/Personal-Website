#include "C4Board.h"
#include <iostream>
#include "C4Col.h"

using namespace std;

C4Board::C4Board(){
    numCol = 7;
    board = new C4Col [numCol];
}

void C4Board::play() {
    int player = 1;
    int turn = 0;
    int colChoice = 0;
    char playerChar = 'X';
    while (turn < (6 * numCol)) { //Get logic for this
        display();
        if (turn % 2 == 0) {
                player = 1;
                playerChar = 'X';
            }
            else{
                player = 2;
                playerChar = 'O';
        }
        cout << "Player " << player << ": " << endl << "Enter column: ";
        cin >> colChoice;
        if (colChoice == -1) {
            cout << "Thanks for playing! ";
            break;
        }
        board[colChoice].addDisc(playerChar);
        win();
        turn++;

    }
}

void C4Board::display(){
    for (int i = board[0].getMaxDiscs() - 1; i >= 0; i--){
        for (int j = 0; j < numCol; j++){
            cout << board[j].getDisc(i) << " | ";
        }
        cout << endl;
    } //Add column numbers and pipes
}

int C4Board::win(){
    int counter = 0;

    for(int i = 0; i >= numCol; i++){
        if (board[0].getMaxDiscs() == 'X'){
            counter++;
        }
        if (counter == 4){
            cout << "The winner is: " << board[0].getMaxDiscs() << endl;
            return 1;
        }
        cout<<counter;
    }
    return 0;
}

