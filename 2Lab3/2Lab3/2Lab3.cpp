/* Lab 3 - Week 3

* Adalyn Behan

* 9/23/25

* Change your Tic-Tac-Toe game to include Class and multiplayer.

  Create at least 3 different players and play their separate games
*/
#include "2Lab3.h"
#include <iostream>
#include <string>
#include <fstream> // for files
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

int main() {
    clearResultsFile();
    char replayChoice;
    do {
        cout << "Adalyn Behan, 7/31/25, Lab #4" << endl;
        cout << "Tic-Tac-Toe project" << endl;
        cout << "Player 1 is X, Player 2 is O" << endl;

        // Reset board and turn count
        num1 = '1'; num2 = '2'; num3 = '3';
        num4 = '4'; num5 = '5'; num6 = '6';
        num7 = '7'; num8 = '8'; num9 = '9';
        turnCount = 0;

        display();

        while (!winPlayer()) {
            if (turnCount % 2 == 0) {
                player1();
                if (winPlayer1()) {
                    break;
                }
            }
            if (draw()) {
                break;
            }
        }

        cout << "\nWould you like to play again? (Y/N): ";
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
