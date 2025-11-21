/* Integer Set - Week 15

* Adalyn Behan

* 11/12/25

*  Create an STL Integer Set of random #s

Using a Ranged Loop, Display all the #s in the Set

Did the program automatically sort the numbers? Explain

*/

#include <iostream>
#include <set>
using namespace std;

int main() {
	cout << "Adalyn Behan, Integer Set Assignment, 11/12/25" << endl;

	set<int> intSet; // Create an STL set to hold integers

	for(int i = 0; i < 10; ++i) { // Loop to insert 10 random integers
		int randomNum = rand() % 100; // Generate a random number between 0 and 99
		intSet.insert(randomNum); // Insert the random number into the set
	}

	cout << "The numbers in the set are: " << endl;
	for (int num : intSet) {
		cout << num << " "; // Display each number in the set
	}

	cout << "\n This is the end of the program." << endl;

	return 0;
	//yes, the program automatically sorts the numbers in order
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
