/* Post Fix, Pre Fix - Week 2

* Adalyn Behan

* 9/17/25

* What is PostFix Algebra? How does it compare to Infix and Prefix?

* Create a simple example
*/

#include <iostream>
using namespace std;


int main(){
	cout << "Adalyn Behan, PostFix, PreFix, 9/17/25" << endl;
cout << "\nPostFix, PreFix Example:" << endl;
	// Postfix example (also known as Reverse Polish Notation)
	// Infix: (3 + 4) * 5
	// Postfix: 3 4 + 5 *
	cout << "Postfix Example (3 4 + 5 *):" << endl;
	int a = 3;
	int b = 4;
	int c = 5;
	int postFixResult = (a + b) * c; // equivalent to postfix evaluation
	cout << "Result: " << postFixResult << endl;
	// Prefix example
	// Infix: (3 + 4) * 5
	// Prefix: * + 3 4 5
	cout << "\nPrefix Example (* + 3 4 5):" << endl;
	int prefixResult = (a + b) * c; // equivalent to prefix evaluation
	cout << "Result: " << prefixResult << endl;
	cout << "This is the end of the program." << endl;
    
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
