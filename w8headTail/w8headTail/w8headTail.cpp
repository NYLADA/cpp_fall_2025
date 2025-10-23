/* Head & Tail - Week 8

* Adalyn Behan

* 10/7/25

*Q2 – Create a Head Node and a Tail Node and link them together.

Create a Display( ) Method and display all the values in the List.
*/

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void display(Node* l) {
    Node* current = l;
    while (current != nullptr) {
        cout << current->value << ", ";
        current = current->next;
    }
    cout << "End" << endl;
}

int main() {
    cout << "Adalyn Behan, Head & Tail Assignment, 10/14/25" << endl;

    Node* head = new Node;
    Node* tail = new Node;

    head->value = 10;     // assign value
    head->next = tail;     // move to second 


    tail->value = 20;   // assign value
    tail->next = nullptr;    // move to head

    display(head);
    

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
