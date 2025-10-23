/* STL List - Week 8

* Adalyn Behan

* 10/7/25

*Q4 - Using the STL List and #include<List>, create an integer List and pushback 5 #s. 

Create a Function that can traverse the List and display the contents
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
    cout << "Adalyn Behan, STL List Assignment, 10/14/25" << endl;

    numList.push_back(1);
    numList.push_back(2);
    numList.push_back(3);
    numList.push_back(4);
    numList.push_back(5);

    display(numList);

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
