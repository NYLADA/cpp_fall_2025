/* Week 1 - Lab 1

* Adalyn Behan

* 8/27/25

* ToH Assignment but add a fourth letter

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> T1 = { 'A', 'B', 'C', 'D'}; // global vectors 
vector<char> T2;
vector<char> T3;

void displayTowers() { // displays the towers
	cout << "\nT1: ";
	for (char c : T1) cout << c << " ";
	cout << "\nT2: ";
	for (char c : T2) cout << c << " ";
	cout << "\nT3: ";
	for (char c : T3) cout << c << " ";
	cout << "\n";
}

bool isValidMove(vector<char>& source, vector<char>& dest) {
	if (source.empty()) return false; // checks to make sure the source location isnt empty
	char moving = source.back();
	if (dest.empty()) return true; //checks if the destination is empty, or if the move is valid
	return moving >= dest.back(); // alphabetical order check
}

vector<char>& getTower(int num) { // returns the correct tower based on the input
	if (num == 1) return T1;
	if (num == 2) return T2;
	return T3;
}

bool isComplete() { // checks if tower 3 has all the letter in order
	return T3.size() == 4 && T3[0] == 'A' && T3[1] == 'B' && T3[2] == 'C' && T3[3] == 'D';
}

int main() {
	int src;
	int dest;
	cout << "Adalyn Behan, Lab 1, 8/30/25" << endl;

	while (!isComplete()) {
		displayTowers();

		cout << "\nEnter source tower (1-3): "; // inputs for source and destination towers
		cin >> src;
		cout << "Enter destination tower (1-3): ";
		cin >> dest;

		if (src < 1 || src > 3 || dest < 1 || dest > 3 || src == dest) {
			cout << "Invalid tower numbers. Try again." << endl;
			continue;
		}

		vector<char>& source = getTower(src);
		vector<char>& destination = getTower(dest);

		if (isValidMove(source, destination)) {
			char moved = source.back();
			source.pop_back();
			destination.push_back(moved);
		}
		else {
			cout << "Invalid move: letters must stay in alphabetical order." << endl;
		}
	}

	displayTowers();
	cout << "\n Puzzle complete!\n";
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
