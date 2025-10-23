/* Push & Pop - Week 6

* Adalyn Behan

* 10/1/25

* Research the Push( ) & Pop( ) commands. Cite your sources. Write a program that will

  Using Stacks and the push( ) command, prompt the user to enter a few names 

   Display the names using a Ranged Loop and appropriate commands

Pop( ) the Stack and note, which name is removed? First or last? Does this follow FILO?
*/

#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    stack<string> nameStack;
    vector<string> nameList;
    string input;
    int count;

    cout << "Adalyn Behan, Stack Push & Pop Assignment, 10/1/25\n";

    cout << "How many names would you like to enter? ";
    cin >> count;
    cin.ignore(); 

    // push to stack
    for (int i = 0; i < count; ++i) {
        cout << "Enter name #" << (i + 1) << ": ";
        getline(cin, input);
        nameStack.push(input);
    }

    // move stack to vector
    stack<string> tempStack = nameStack;
    while (!tempStack.empty()) {
        nameList.push_back(tempStack.top());
        tempStack.pop();
    }

    // display 
    cout << "\nNames in stack (top to bottom):\n";
    for (string name : nameList) {
        cout << name << endl;
    }

    //display  removed name
    string removed = nameStack.top();
    nameStack.pop();
    cout << "Removed name: " << removed << endl;
   
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
