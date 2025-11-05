/* Lab 6 - Week 10

* Adalyn Behan

* 10/23/25

* Using Maps and Lists, create a phone book that will list a name as key and a list of phone numbers as the value

Create 4 names and at least 2 phone numbers per name

 

*/

#include <iostream>
#include <map>
#include <list>
#include <string>
#include <stack>
using namespace std;

int main(){
    cout << "Adalyn Behan, Lab 6, 10/23/25\n" << endl;

    map<string, list<string>> phoneBook;

	// Adding entries to the phone book
    phoneBook["Pikachu"] = { "123-555-4599" , "123-555-8937" };
	phoneBook["Dazai"] = { "987-555-1234" , "987-555-5678" };
	phoneBook["Luffy"] = { "456-555-2468" , "456-555-1357" };
	phoneBook["Gojo"] = { "789-555-3698" , "789-555-1472" };

	//display the phonebook
	for (auto& group : phoneBook) {
		cout << group.first << ": ";
		for(const auto& number : group.second) {
			cout <<number << ", ";
		}
		cout << "\n" << endl;
	}

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
