/* Group Derived Class - Week 3

* Adalyn Behan

* 9/3/25

* Find a Group Base class that a student has extended from Base class and create a double Inheritance. Add another more specific Attribute 

Create a .cpp File and create Objects from Both. Invoke the Methods
*/

#include "publishedBook.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Adalyn Behan, Group Derived Class, 9/10/25\n" << endl;
    cout << "\tBase Class: Book" << endl;
    Book favBook("Lightlark", "Alex Aster", 409, 56);   // book object
    favBook.display();  // call display
    cout << endl;

    cout << "\tBase Class 2: Publisher" << endl;
	Publisher pubBook("Amulet Books", 2024); // published book object
	pubBook.display(); // call display  
    cout << endl;

    cout << "\tDerived Class: PublishedBook" << endl;
    PublishedBook textBook("Starting Out with C++", "Tony Gaddis et al.", 1344, 20,
        "Pearson", 2023, "978-0135404676");
	textBook.display(); // call display
    cout << endl;


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
