/* Week 1 - Ranged Loops
 
* Adalyn Behan

* 8/25/25
 
* Create a Loop that will sum the integers x{4,2,6,9,5,3};

  Call a Function to display the integers

  Sort the numbers and then display them again (All with Ranged Loops)

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for sort
using namespace std;

vector<int> intVec = { 4, 2, 6, 9, 5, 3 };  // integer vector
int total = 0;

void display() {
	for (int i : intVec) { // display vector in a function
		cout << i << ", ";
	}
}

int main(){

	cout << "Adalyn Behan, Ranged Loops Assignment, 8/25/25" << endl;
	
	cout << "\nSum of the Vector: ";
	for (int sum : intVec) { // display sum of vector
		total += sum;
	}
	cout << total << endl; // display total

	cout << "\nDisplay Function: ";
	display();

	cout << "\n\nSorted Vector: ";
	sort(intVec.begin(), intVec.end()); // sort vector
	display();

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
