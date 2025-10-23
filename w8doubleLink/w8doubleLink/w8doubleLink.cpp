/* Double Link - Week 8

* Adalyn Behan

* 10/7/25

*Q3 – What is a doubly Linked List?

Add a previous pointer to Q2 and a Method that will display all values in reverse order
*/

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node* prev; // added a prev pointer for doubly linked list
};

void frontDisplay(Node* l) {
    Node* current = l;
    while (current != nullptr) {
        cout << current->value << ", ";
        current = current->next;
    }
    cout << "End" << endl;
}\
void backDisplay(Node* l) {
    Node* current = l;
    while (current != nullptr) {
        cout << current->value << ", ";
        current = current->prev;
    }
    cout << "Start" << endl;
}

int main() {
    cout << "Adalyn Behan, Double Link Assignment, 10/14/25" << endl;

    Node* head = new Node;
    Node* tail = new Node;

    head->value = 10;     // assign value
    head->next = tail;     // move to second 
	head->prev = nullptr; // head's previous is null


    tail->value = 20;   // assign value
    tail->next = nullptr;    // move to head
	tail->prev = head; // tail's previous is head

    frontDisplay(head);
	backDisplay(tail);


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
