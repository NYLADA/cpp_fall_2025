/* Character Set - Week 15

* Adalyn Behan

* 11/12/25

*  Create an STL Character Set of random letters

Using an Iterator, Display all the characters in the Set

Did the program automatically sort the letters? Explain

*/
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	cout << "Adalyn Behan, Character Set Assignment, 11/12/25" << endl;
	set<char> charSet; // Create an STL set to hold integers

	for (int i = 0; i < 10; ++i) { // Loop to insert 10 random integers
		int randomChar = rand() % 122 + 1 ; // Generate a characters

		if ((randomChar >= 65 && randomChar <= 90) || (randomChar >= 97 && randomChar <= 122)) { // makes sure the character is a letter
			charSet.insert(randomChar); // Insert the random number into the set
		}
		else {
			i--;
		}
		
	}

	cout << "The characters in the set are: " << endl;
	for (char letter : charSet) {
		cout << letter << " "; // Display each number in the set
	}

	cout << "\n This is the end of the program." << endl;

	charSet.clear(); // clears the set
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
