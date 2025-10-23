/* Iterator - Week 8

* Adalyn Behan

* 10/7/25

*Q5 – What is an iterator? How can iterators be used to display the contents of a List?

What are the commands that can be used to insert, erase, find the start and end of the list?

Create a simple example
*/

#include <iostream>
#include <list>
using namespace std;

void display(const list<int>& l) {
    for (int i : l) {
        cout << i << ", ";
    }
    cout << "End" << endl;
}

int main() {
    list<int> numList;
    cout << "Adalyn Behan, Iterator Assignment, 10/14/25" << endl;

    numList.push_back(10);
    numList.push_back(20);
    numList.push_back(30);

    cout << "\nOriginal List: ";
    display(numList);

    auto it = numList.begin(); // iterator to the start of the list
    it++;
    numList.insert(it, 15); // inserts 15 before 20 and after 10

    cout << "\nAfter Insert: ";
    display(numList);

    it = numList.begin();
    it++; // points to 15
    it++; // points to 20
    numList.erase(it); //removes 20

    cout << "\nAfter Erase: ";
    display(numList);



    cout << "\nThis is the end of the program" << endl;
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
