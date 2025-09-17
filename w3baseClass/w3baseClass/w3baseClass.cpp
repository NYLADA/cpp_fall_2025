/* Base Class - Week 3

* Adalyn Behan

* 9/3/25

* Research Inheritance. Create a Base class with several Attributes (data) and a display( ) Function. 

In main( ), create an Object from the class and display( ) all Attributes.
*/

#include "Book.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Adalyn Behan, Base Class, 9/10/25\n" << endl;

    Book favBook("Lightlark", "Alex Aster", 409, 56);   // book object

    favBook.display();  // call display

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
