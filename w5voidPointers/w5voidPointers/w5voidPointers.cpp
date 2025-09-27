/* Void Pointers - Week 5

* Adalyn Behan

* 9/21/25

* What is a void pointer? How can casting and void pointers be used to decide between char and int?

* Create an example
*/

#include <iostream>
#include <string>
using namespace std;

void display(void* ptr, char type) {
	if (type == 'i') {
		cout << "\nInteger Value: " << *(int*)ptr << endl; // cast to int pointer and dereference
	}
	else if (type == 'c') {
		cout << "\nCharacter Value: " << *(char*)ptr << endl; // cast to char pointer and dereference
	}
	else {
		cout << "Unknown type" << endl;
	}
}

int main() {
	cout << "Adalyn Behan, Void Pointers, 9/21/25" << endl; 

	int num = 42;
	char ch = 'A';

	void* ptr; // Declare a void pointer

	ptr = &num;  // point to int
	display(ptr, 'i');

	ptr = &ch;  // point to char
	display(ptr, 'c');

	cout << "\nThis is the end of the program." << endl;

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
