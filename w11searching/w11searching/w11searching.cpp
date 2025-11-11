/* Searching - Week 11

* Adalyn Behan

* 11/5/25

*  How can Recursion be used to search for a letter within a string?

*/
#include <iostream>
#include <string>
using namespace std;

void wordSearch(string str, char letter, int i) {
    // Base case: if index reaches the length of the string, letter not found
    if (i >= str.length()) {
        cout << "Letter '" << letter << "' not found in the string." << endl;
        return;
    }
    // If the current character matches the letter, print its position
    if (str[i] == letter) {
        cout << "Letter '" << letter << "' found in " << str << endl;
        return;
    }
    // Recursive call to check the next character
    wordSearch(str, letter, i + 1);
}
int main(){
    cout << " Adalyn Behan, 11/5/25, Searching Assignment" << endl;
    string word;
	char letter;

	cout << "Enter a string: ";
	getline(cin, word);

	cout << "Enter a letter to search for: ";
	cin >> letter;
    wordSearch(word, letter, 0);

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
