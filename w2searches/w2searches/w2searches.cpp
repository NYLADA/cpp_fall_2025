/* Searches - Week 2

* Adalyn Behan

* 7/6/25

* Q3 what’s in a name – Searches. Create 2 programs

   Use a Linear Search and then a Binary search

   Prompt the user to enter their name

  Display the vowels that are in their name

  Calculate the Big O for each type of search
*/

#include <iostream>
#include <string>
using namespace std;

bool binarySearch(char target, string sortedVowels) {
    int left = 0;
    int right = sortedVowels.length() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (sortedVowels[mid] == target) return true;
        else if (sortedVowels[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {
    string name;
	string vowels = "aeiouyAEIOUY"; // Including both lowercase and uppercase vowels
	string nameVowels = ""; // To store found vowels
    // I am including 'y' in the vowels list for this program

    cout << "Adalyn Behan, Searches, 9/2/25" << endl;

    cout << "\nEnter your name: ";
    getline(cin, name); // Just in case the name has spaces, i used getline 

    for(char i : name) { // Linear search through each character in the name
        for(char j : vowels) { // Check against each vowel
            if(i == j) {
                if(nameVowels.find(i) == string::npos) { // Avoid duplicates
                    nameVowels += i; // Add vowel to the result string
                }
                break; // No need to check other vowels once a match is found
            }
        }
	}
    for (char i : name) {
        if (binarySearch(i, vowels)) {
            if (nameVowels.find(i) == string::npos) {
                nameVowels += i;
            }
        }
    }
    cout << "Vowels in your name: " << nameVowels << endl;
    // Big O Analysis
    // Linear Search: O(n*m) where n is the length of the name and m is the number of vowels (constant, 10 in this case)
    // Binary Search: O(n log m) if we were to sort the vowels and use binary search for each character in the name

    cout << "This is the end of the program. " << endl;
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
