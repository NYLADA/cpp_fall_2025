/* Group Base Class - Week 3

* Adalyn Behan

* 9/3/25

* Look in Base Class and create a level 1 Derived class that is more specific

Create a video and demonstrate
*/

#include "Textbook.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Adalyn Behan, Group Base Class, 9/10/25\n" << endl;

    Textbook textBook("Starting Out with C++: Early Objects", "Tony Gaddis, et al.", 1344, "C++", 10);   // book object

    textBook.display();  // call display

    cout << "\nEnd of program. " << endl;

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
