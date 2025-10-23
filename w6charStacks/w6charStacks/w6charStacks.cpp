/* Char Stacks - Week 6

* Adalyn Behan

* 10/1/25

*  Prompt the user to enter their name

   Load each character into a character stack

   Sort the letters and then Display the result
*/

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    stack<char> charStack;
    vector<char> sortedChars;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // move each char to stack
    for (char c : name) {
        if (isalpha(c)) {           //only letters
            charStack.push(c);
        }
    }

    // move chars from stack to vector
    while (!charStack.empty()) {
        sortedChars.push_back(charStack.top());
        charStack.pop();
    }

    // sort the chars
    sort(sortedChars.begin(), sortedChars.end());

    // display sorted chars
    cout << "\nNote: Uppercase letters will appear before lowercase letters." << endl;

    cout << "Sorted characters in your name:\n";
    for (char c : sortedChars) {
        cout << c << " ";
    }
    cout << endl;

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
