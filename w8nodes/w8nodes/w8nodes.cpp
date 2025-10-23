/* Nodes - Week 8

* Adalyn Behan

* 10/7/25

*   Q1 – Research Linked Lists. What are Linked Lists?

What is a Node? Explain the Pointer/Value pair. How are these defined and created?

Create an example
*/

#include <iostream>
using namespace std;

struct Node {
    int value;       //value
    Node* next;       // pointer
};

int main() {
    cout << "Adalyn Behan, Nodes Assignment, 10/14/25" << endl;

    Node* head = new Node();   // node head
	Node* second = new Node(); // second node
	Node* third = new Node();  // third node

	head->value = 1;         // assign value
	head->next = second;    // move to second node
	
	second->value = 2;       // assign value
	second->next = third;     // move to third node

	third->value = 3;     // assign value
	third->next = nullptr; // end of list

	Node* current = head;
	while (current != nullptr) {
		cout << current->value << ", ";
		current = current->next;  // move to next node
	}
	cout << "End" << endl;

	cout << "This is the end of the program" << endl;
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
