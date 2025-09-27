/* Pointing to Arrays - Week 5

* Adalyn Behan

* 9/21/25
* 
* How can pointers be used instead of sending an array to a function?

* Set a pointer to an array. Send the pointer to a Function as C-B-R. Modify and increment the pointer.

* Display the array in main( ) – have the values changed?
*/

#include <iostream>
using namespace std;

void updateArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) += 5; // increment each element by 5
    }
}

int main(){
    int array[5] = { 10,20,30,40,50 };
    int* ptr = array; // pointer to the first element in the array

    cout << "Adalyn Behan, Pointing to Arrays, 9/21/25\n" << endl;

	cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << ", ";  // display original array
    }
    cout << endl;

    updateArray(ptr, 5); //pass pointer and size of array

    cout << "Modified Array: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << ", "; // display modified array
    }
    cout << endl;
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
