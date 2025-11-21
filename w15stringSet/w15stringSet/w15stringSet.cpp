/* String Set - Week 15

* Adalyn Behan

* 11/12/25

*  Create an STL Integer Set of random words

Using an iterator, Display all the names in the Set

Did the program automatically sort the words?

Invoke the find command/function and search for a name within your set

*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    cout << "Adalyn Behan, String Set Assignment, 11/12/25" << endl;

    set<string> stringSet; // Create an STL set to hold strings
    cout << "Enter words when prompted." << endl;

    for (int i = 0; i < 10; ++i) { // Loop to insert 10 words
        cout << "Enter word " << i + 1 << ": ";
        string word;
        getline(cin, word); // Read a word from user
        stringSet.insert(word); // Insert the word into the set
    }

    cout << "\nThe words in the set are: " << endl;
    for (auto it = stringSet.begin(); it != stringSet.end(); ++it) {
        cout << *it << " "; // Display each word in the set
    }
	cout << "\n This is the end of the program." << endl;

	return 0;
	//yes, the program automatically sorts the words in order
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
