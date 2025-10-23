/* Support Functions - Week 6

* Adalyn Behan

* 10/1/25

* List 4 Support Functions/commands that are made for STL Stacks  

  Create an example and illustrate your choices 
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<string> name;
	cout << "Adalyn Behan, Support Functions Assignment, 10/1/25" << endl;
    // 1. push()
    name.push("Akaashi");
    name.push("Oikawa");
    name.push("Kenma");  // kenma is pushed toc top now
  
    // 2. top()
    cout << "Top setters: " << name.top() << endl;

    // 3. pop()
    name.pop(); // Removes 'Kenma'
    cout << "After pop, top setter is: " << name.top() << endl;

    // 4. empty()
    while (!name.empty()) {
        cout << "Removing: " << name.top() << endl;
        name.pop();
    }

    cout << "Stack is now empty: " << boolalpha << name.empty() << endl;
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
