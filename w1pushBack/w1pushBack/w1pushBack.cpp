/* Week 1 - Push Back

* Adalyn Behan

* 8/25/25

* Fill an Integer Vector with 5 random #s. 

   Apply the Sort( ) Function to the Vector

   Display the sorted values using a Ranged Loop

    Pop_back( ) the Vector and note, which is removed? First or last? Does this follow FILO?

    Repeat for a character and a string Vector

*/

#include <iostream>
#include <vector>
#include<string>
#include <algorithm> // for sort
#include <cstdlib> // for rand
using namespace std;

vector<int> intVec; //int vector
vector<char> charVec; //char vector
vector<string> strVec; //string vector

void sortInt() {
    sort(intVec.begin(), intVec.end()); // sort
}
void displayInt() {
    for (int i : intVec) {
        cout << i << ",";
    }
}
void sortChar() {
    sort(charVec.begin(), charVec.end()); // sort
}
void displayChar() {
    for (char i : charVec) {
        cout << i << ",";
    }
}
void sortStr() {
    sort(strVec.begin(), strVec.end()); // sort
}
void displayStr() {
    for (string i : strVec) {
        cout << i << ",";
    }
}
void randVectors() {
    srand(time(0)); // seed randomness

    for (int i = 0; i < 5; ++i) {
        intVec.push_back(rand() % 100 + 1); // random int 1–100
        charVec.push_back('a' + rand() % 26); // random lowercase letter
        string s;
        for (int j = 0; j < 5; ++j) {
            s += 'a' + rand() % 26;
        }
        strVec.push_back(s); // random 5-letter string
    }
}
int main(){
	cout << "Adalyn Behan, Push Back Assignment, 8/25/25" << endl;
  

    randVectors();

    cout << "\nRandom Integer Vector: ";
    displayInt();
    cout << "\nSorted Integer Vector: ";
    sortInt();
    displayInt();
	cout << "\nPop Back Integer Vector: ";
    intVec.pop_back();
    displayInt();

    
    cout << "\n\nChar Vector: ";
    displayChar();
    cout << "\nSorted Char Vector: ";
    sortChar();
    displayChar();
    cout << "\nPop Back Char Vector: ";
    charVec.pop_back();
    displayChar();
    
    cout << "\n\nString Vector: ";
    displayStr();
    cout << "\nSorted String Vector: ";
    sortStr();
    displayStr();
    cout << "\nPop Back String Vector: ";
    strVec.pop_back();
    displayStr();

	cout << "\n\nThis is the end of the program." << endl;
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
