/* Lab 3 - Week 3

* Adalyn Behan

* 9/23/25

* Change your Tic-Tac-Toe game to include Class and multiplayer.

  Create at least 3 different players and play their separate games
*/
#include "Lab23.h"
#include <iostream>
using namespace std;
 
// Global variables
char num1 = '1';
char num2 = '2';
char num3 = '3';
char num4 = '4';
char num5 = '5';
char num6 = '6';
char num7 = '7';
char num8 = '8';
char num9 = '9';
int turnCount = 0; // when turn count is even(0-8) its player 1's turn, when odd(1-9) its player 2's turn

TTT::TTT() {}

void TTT::display() {

    cout << "\n\t|-----------------|" << endl;
    cout << "\t|  " << num1 << "  |  " << num2 << "  |  " << num3 << "  | " << endl;
    cout << "\t|-----|-----|-----|" << endl;
    cout << "\t|  " << num4 << "  |  " << num5 << "  |  " << num6 << "  | " << endl;
    cout << "\t|-----|-----|-----|" << endl;
    cout << "\t|  " << num7 << "  |  " << num8 << "  |  " << num9 << "  | " << endl;
    cout << "\t|-----------------|" << endl;
}

void TTT::playGame(Player& p1, Player& p2) {
    display();

    while (true) {
        Player currentPlayer = (turnCount % 2 == 0) ? p1 : p2;
        int move;
        cout << currentPlayer.player << "'s turn (" << currentPlayer.input << "). Select a number from 1-9: ";
        cin >> move;

        bool validMove = false;
        switch (move) {
        case 1: 
            if (num1 == '1') { 
                num1 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 2: 
            if (num2 == '2') { 
                num2 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 3: 
            if (num3 == '3') { 
                num3 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 4: 
            if (num4 == '4') { 
                num4 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 5: 
            if (num5 == '5') { 
                num5 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 6: 
            if (num6 == '6') { 
                num6 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 7: 
            if (num7 == '7') { 
                num7 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 8: 
            if (num8 == '8') { 
                num8 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        case 9: 
            if (num9 == '9') { 
                num9 = currentPlayer.input; 
                validMove = true; 
            } 
            break;
        default: 
            cout << "Invalid number. Please select a number from 1-9." << endl;
        }

        if (!validMove) {
            cout << "That number is already taken. Please select a different number." << endl;
            continue;
        }

        display();
        turnCount++;

        if (checkWin(currentPlayer.input)) {
            cout << currentPlayer.player << " wins!" << endl;
            break;
        }

        if (draw()) {
            cout << "It's a draw!" << endl;
            break;
        }
    }
}

bool TTT::checkWin(char input) {  // checks for a win, if there is none, the game simply moves forward
    return (
        (num1 == input && num4 == input && num7 == input) ||
        (num2 == input && num5 == input && num8 == input) ||
        (num3 == input && num6 == input && num9 == input) ||
        (num1 == input && num2 == input && num3 == input) ||
        (num4 == input && num5 == input && num6 == input) ||
        (num7 == input && num8 == input && num9 == input) ||
        (num1 == input && num5 == input && num9 == input) ||
        (num3 == input && num5 == input && num7 == input)
    );
}

bool TTT::draw() {
    return (turnCount == 9 && !checkWin('X') && !checkWin('O'));
}

void TTT::resetBoard() {
    num1 = '1'; num2 = '2'; num3 = '3';
    num4 = '4'; num5 = '5'; num6 = '6';
    num7 = '7'; num8 = '8'; num9 = '9';
    turnCount = 0;
}

int main() {
    Player p1("Player1", 'X');
    Player p2("Player2", 'O');
    Player p3("Player3", 'O');
    Player p4("Player4", 'O');

    char replayChoice;

    do {
        cout << "Adalyn Behan, 9/28/25, Lab #4" << endl;
        cout << "Tic-Tac-Toe project" << endl;
        cout << "Player 1 VS Everyone" << endl;

        // Game 1: Player1 vs Player2
        cout << "\nPlayer 1 VS Player 2" << endl;
        TTT game1;
        game1.resetBoard();
        game1.playGame(p1, p2);

        // Game 2: Player1 vs Player3
        cout << "Player 1 VS Player 3" << endl;
        TTT game2;
        game2.resetBoard();
        game2.playGame(p1, p3);

        // Game 3: Player1 vs Player4
        cout << "Player 1 VS Player 4" << endl;
        TTT game3;
        game3.resetBoard();
        game3.playGame(p1, p4);

        cout << "\nWould you like to play all three games again? (Y/N): ";
        cin >> replayChoice;
        replayChoice = toupper(replayChoice);

    } while (replayChoice == 'Y');

    cout << "Thank you for playing!" << endl;
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
