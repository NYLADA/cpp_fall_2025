/* Selection Sort- Week 2

* Adalyn Behan

* 7/6/25

* What other kind of Sorts are there? What is their Big O(n)?

    Create a Selection sort to sort 7 numbers
*/

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
	int size = arr.size();       // get size of vector
	for (int i = 0; i < size - 1; i++) {    // iterate through each element except the last one  
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {       // find the index of the minimum element
				minIndex = j;           // update minIndex if a smaller element is found
            } 
        }
		swap(arr[i], arr[minIndex]);       // swap the found minimum element with the first element of the unsorted part
    }
}
int main() {
	vector<int> numbers = { 27, 9, 14, 33, 13, 5, 3 };
    cout << "Adalyn Behan, Selection Sort, 9/2/25" << endl;

	cout << "\nUnsorted numbers: ";  //cout unsorted vector first
    for (int num : numbers) {
        cout << num << " ";
	}

	selectionSort(numbers); // function call

    cout << "\n\nSorted numbers: ";   // cout sorted vector
    for (int num : numbers) {
        cout << num << " ";
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
