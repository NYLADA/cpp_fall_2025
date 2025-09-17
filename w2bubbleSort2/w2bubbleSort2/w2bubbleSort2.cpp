/* Bubble Sort - Week 2

* Adalyn Behan

* 7/6/25

* Q4 – Bubble Sort

   What is a Bubble sort? What is the Big O(n)?

   Create a Bubble sort to sort 5 names from an array

   Create a Flowchart
*/

#include <iostream>
#include <string>
using namespace std;
string names[5] = { "Dazai", "Chuuya", "Atsushi", "Kunikida", "Akutagawa" };

void bubbleSort(string arr[], int size) {
    for (int i = 0; i < size - 1; i++) {     // outer loop iterates through the array
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {    // checks if current name is greater than next
                swap(arr[j], arr[j + 1]);   // if true, it swaps them and the loop continues
            }
        }
    }
}
int main() {
    string names[5] = { "Dazai", "Chuuya", "Atsushi", "Kunikida", "Akutagawa" };

    cout << "Adalyn Behan, Bubble Sort, 9/2/25" << endl;

    cout << "\nUnsorted names: ";
    for (int i = 0; i < 5; i++) {
        cout << names[i] << " ";
    }

    bubbleSort(names, 5); // Pass array and size

    cout << "\n\nAlphabetically sorted names: ";
    for (int i = 0; i < 5; i++) {
        cout << names[i] << " ";
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
