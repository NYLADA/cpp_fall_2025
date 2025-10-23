/* Stacking TOH - Week 6

* Adalyn Behan

* 10/1/25

* Replace the Vectors with Stacks in your 3-bit Tower of Hanoi Program from Vectors week. 

    Make any and all adjustments to the program as needed. Explain adjustments in your video
*/

#include <iostream>
#include <stack>
using namespace std;

stack<char> T1, T2, T3;

void displayTowers() {
                               // Create temporary copies to preserve original stacks
    stack<char> temp1 = T1, temp2 = T2, temp3 = T3;

    cout << "\nT1: ";
    while (!temp1.empty()) {
        cout << temp1.top() << " ";
        temp1.pop();        // Pop to move down the stack
    }

    cout << "\nT2: ";
    while (!temp2.empty()) {
        cout << temp2.top() << " ";
        temp2.pop();
    }

    cout << "\nT3: ";
    while (!temp3.empty()) {
        cout << temp3.top() << " ";
        temp3.pop();
    }

    cout << "\n";
}

bool isValidMove(stack<char>& source, stack<char>& dest) {
    if (source.empty()) return false;                // checks to see if tower is empty
    char moving = source.top();                         // get top letter
    if (dest.empty()) return true;                      // checks if denstination is empty
    return moving >= dest.top();                     // make sure that its in alphabetical order
}


stack<char>& getTower(int num) {
    if (num == 1) return T1;
    if (num == 2) return T2;
    return T3;
}

bool isComplete() {
    if (T3.size() != 3) return false;

    stack<char> temp = T3;
    return temp.top() == 'C' && (temp.pop(), temp.top() == 'B') && (temp.pop(), temp.top() == 'A');
}

int main() {
    int src, dest;

    cout << "Adalyn Behan, Tower of Hanoi Assignment, 10/1/25" << endl;

    // initilize like this so 'A' is in the front
    T1.push('C');
    T1.push('B');
    T1.push('A');

    while (!isComplete()) {
        displayTowers();                           

        cout << "\nEnter source tower (1-3): ";
        cin >> src;
        cout << "Enter destination tower (1-3): ";
        cin >> dest;

        if (src < 1 || src > 3 || dest < 1 || dest > 3 || src == dest) {
            cout << "Invalid tower numbers. Try again." << endl;
            continue;
        }

        // Get references to the selected towers
        stack<char>& source = getTower(src);
        stack<char>& destination = getTower(dest);

        // Attempt the move if valid
        if (isValidMove(source, destination)) {
            char moved = source.top();                  // get 
            source.pop();                               // remove from source
            destination.push(moved);                    // add to destination
        }
        else {
            cout << "Invalid move: letters must stay in alphabetical order." << endl;
        }
    }

    // Final display and success message
    displayTowers();
    cout << "\nPuzzle complete!\n";
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
