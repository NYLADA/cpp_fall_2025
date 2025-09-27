#ifndef 2LAB3_H
#define 2LAB3_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
protected:
	string player;
	int choice;
public:
    bool winPlayer();
    bool draw();
	Player(string s, int c) : player(s), choice(c) {
        cout << "\nSelect a number from 1-9" << endl;
        cin >> s;

        switch (s) {
        case 1:
            if (num1 == '1') {
                num1 = c;
                display();
                turnCount++; // this allows player 2 to take their turn
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }

        case 2:
            if (num2 == '2') {
                num2 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 3:
            if (num3 == '3') {
                num3 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 4:
            if (num4 == '4') {
                num4 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 5:
            if (num5 == '5') {
                num5 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 6:
            if (num6 == '6') {
                num6 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 7:
            if (num7 == '7') {
                num7 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 8:
            if (num8 == '8') {
                num8 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        case 9:
            if (num9 == '9') {
                num9 = c;
                display();
                turnCount++;
                break;
            }
            else {
                cout << "\nThat number is already taken. Please select a different number." << endl;
                break;
            }
        default:
            // by not adding turnCount++ here, the program allows the player to try again
            cout << "Invalid number. Please select a number from 1-9." << endl;
        }
	}
    // Function to read results from a file and display them
    void resultsFile() {
        ifstream file("TTTresults.txt");
        if (file.is_open()) {
            string wins; // string that is used to grab data from file
            while (getline(file, wins)) {  //reads each line from the file
                cout << wins << endl;
            }
            file.close();
        }
        else {
            cout << "Unable to open file." << endl;  //for debugging
        }
    }

    //function to clear the results
    void clearResultsFile() {
        ofstream file("TTTresults.txt", ios::trunc);
        file.close();
    }
    // Function to update the results file with new totals
    void updateResultsFile(int xWinIn, int oWinIn, int tieIn) {
        int xWins = 0;
        int oWins = 0;
        int ties = 0;

        ifstream inFile("TTTresults.txt");
        string results;
        if (inFile.is_open()) {
            while (getline(inFile, results)) {
                if (results.find("X Wins") != string::npos)
                    xWins = stoi(results.substr(results.find(":") + 2));
                else if (results.find("O Wins") != string::npos)
                    oWins = stoi(results.substr(results.find(":") + 2));
                else if (results.find("Ties") != string::npos)
                    ties = stoi(results.substr(results.find(":") + 2));
            }
            inFile.close();
        }

        xWins += xWinIn;
        oWins += oWinIn;
        ties += tieIn;

        ofstream outFile("TTTresults.txt");
        if (outFile.is_open()) {
            outFile << "X Wins: " << xWins << endl;
            outFile << "O Wins: " << oWins << endl;
            outFile << "Ties: " << ties << endl;
            outFile.close();
        }
        else {
            cout << "Unable to open file." << endl;
        }

    }
    // Game display
    void display() {

        cout << "\n\t|-----------------|" << endl;
        cout << "\t|  " << num1 << "  |  " << num2 << "  |  " << num3 << "  | " << endl;
        cout << "\t|-----|-----|-----|" << endl;
        cout << "\t|  " << num4 << "  |  " << num5 << "  |  " << num6 << "  | " << endl;
        cout << "\t|-----|-----|-----|" << endl;
        cout << "\t|  " << num7 << "  |  " << num8 << "  |  " << num9 << "  | " << endl;
        cout << "\t|-----------------|" << endl;
    }
    // player 1 win conditions
    // 
	// ned to collect player number to make the code smaller, make a constructior for the  winplayer fuinction and pass the player number in it
    // 
// these are booleans so that I can conclude the game if the fucntion return true
    bool winPlayer() {  // checks for a win, if there is none, the game simply moves forward
        if (num1 == 'X' && num4 == 'X' && num7 == 'X') {
            cout << "\nPlayer 1 wins with a vertical line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num2 == 'X' && num5 == 'X' && num8 == 'X') {
            cout << "\nPlayer 1 wins with a vertical line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num3 == 'X' && num6 == 'X' && num9 == 'X') {
            cout << "\nPlayer 1 wins with a vertical line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num1 == 'X' && num2 == 'X' && num3 == 'X') {
            cout << "\nPlayer 1 wins with a horizontal line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num4 == 'X' && num5 == 'X' && num6 == 'X') {
            cout << "\nPlayer 1 wins with a horizontal line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num7 == 'X' && num8 == 'X' && num9 == 'X') {
            cout << "\nPlayer 1 wins with a horizontal line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num1 == 'X' && num5 == 'X' && num9 == 'X') {
            cout << "\nPlayer 1 wins with a diagonal line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else if (num3 == 'X' && num5 == 'X' && num7 == 'X') {
            cout << "\nPlayer 1 wins with a diagonal line!" << endl;
            updateResultsFile(1, 0, 0);
            resultsFile();
            return true;
        }
        else {
            return false;
        }
    }
    // checks for a draw, if there is one, the game ends
    bool draw() {

        if ((turnCount == 9) && (!winPlayer1() && !winPlayer2())) {
            cout << "\nThe game is a draw!" << endl;
            updateResultsFile(0, 0, 1);
            resultsFile();
            return true;
        }
        else {
            return false;
        }
    }
};
#endif