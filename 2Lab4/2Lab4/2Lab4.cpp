/* Lab 4 - Week 4

* Adalyn Behan

* 9/23/25

* Using Enums – (R)ock (P)aper & (S)cissors to represent 1-3 choices,
1. Create a game Rock, Paper, Scissors and play against the computer.
2. Prompt the user to enter their choice but Protect against invalid data.
3. The computer will randomly choose 1-3 after the player makes his choice.
4. Record all wins, ties and losses in their respective Vectors
5. Play until someone scores 5 wins
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    vector<int> playerWinsVec;
    vector<int> computerWinsVec;
    vector<int> tiesVec;

    enum choice { Rock = 1, Paper, Scissors };
    choice player, computer;
    int playerWins = 0;
    int computerWins = 0;
    int ties = 0;
    int input;
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    cout << "Adalyn Behan, Lab 4, 9/26/25" << endl;
    cout << "Welcome to Rock, Paper, Scissors." << endl;


    do {
        cout << "Player Wins: " << playerWins << " \tComputer Wins: " << computerWins << " \tTies: " << ties << endl;
        cout << "Please input your choice: (1) Rock, (2) Paper, (3) Scissors: ";

        cin >> input;
        while (cin.fail() || input < 1 || input > 3) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice. Please enter 1, 2, or 3: ";
            cin >> input;
        }
        player = static_cast<choice>(input);


        cout << "\nComputer is choosing..." << endl;
        computer = static_cast<choice>(rand() % 3 + 1); // Random choice between 1 and 3
        cout << "Computer chose: " << computer << endl;

        switch (player) {
        case Rock:
            switch (computer) {
            case Rock:
                cout << "It's a tie!" << endl;
                ties++;
                tiesVec.push_back(ties);
                break;
            case Paper:
                cout << "Computer wins this round!" << endl;
                computerWins++;
                computerWinsVec.push_back(computerWins);
                break;
            case Scissors:
                cout << "You win this round!" << endl;
                playerWins++;
                playerWinsVec.push_back(playerWins);
                break;
            }
            break;

        case Paper:
            switch (computer) {
            case Rock:
                cout << "You win this round!" << endl;
                playerWins++;
                playerWinsVec.push_back(playerWins);
                break;
            case Paper:
                cout << "It's a tie!" << endl;
                ties++;
                tiesVec.push_back(ties);
                break;
            case Scissors:
                cout << "Computer wins this round!" << endl;
                computerWins++;
                computerWinsVec.push_back(computerWins);
                break;
            }
            break;

        case Scissors:
            switch (computer) {
            case Rock:
                cout << "Computer wins this round!" << endl;
                computerWins++;
                computerWinsVec.push_back(computerWins);
                break;
            case Paper:
                cout << "You win this round!" << endl;
                playerWins++;
                playerWinsVec.push_back(playerWins);
                break;
            case Scissors:
                cout << "It's a tie!" << endl;
                ties++;
                tiesVec.push_back(ties);
                break;
            }
            break;
        }

    } while (playerWins < 5 && computerWins < 5);

    if (playerWins == 5) {
        cout << "You reached 5 wins first!" << endl;
    }
    else {
        cout << "Computer reached 5 wins first!" << endl;
    }

    cout << "This is the end of the program." << endl;
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
