/* Week 1 - Vectors

* Adalyn Behan

* 8/25/25

* Create a program that uses and demonstrates and integer, character and a string vector

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> intVec = { 1, 2, 3, 4, 5 };  // integer vector
	vector<char> charVec = { 'a', 'b', 'c', 'd', 'e' };  // char vector
	vector<string> stringVec = { "red", "orange", "yellow", "green", "blue" };  // string vector

	cout << "Adalyn Behan, Vectors Assignment, 8/25/25" << endl;

	cout << "\nInteger Vector: "; // ranged loops to display the containers
	for (int i : intVec) {
		cout << i << ", ";
	}

	cout << "\nCharacter Vector: ";
	for (char c : charVec) {
		cout << c << ", ";
	}

	cout << "\nString Vector: ";
	for (string s : stringVec) {
		cout << s << ", ";
	}

	cout << "\n\nThis is the end of the program." << endl;

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
