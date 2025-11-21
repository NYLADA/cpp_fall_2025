/* Adjacency List - Week 13

* Adalyn Behan

* 11/12/25

*  What is an Adjacency List? Create one for the Graph above. 

Using Maps, write a program that will create an adjacency list for your Graph

*/


#include <iostream>
#include <list>
#include <map>
using namespace std;

int main(){
    cout << "Adalyn Behan, Adjacency List Assignment, 11/12/25" << endl;

	//create adjacency list using unordered map
	map<int, list<int>> nodes;

	//create lists for each node's connections
    list<int> number0{ 1,2 };
	list<int> number1{ 0,2,3 };
	list<int> number2{ 0,1 };
	list<int> number3{ 1 };
	
	//insert nodes into adjacency list
	nodes[0] = number0;
	nodes[1] = number1;
	nodes[2] = number2;
	nodes[3] = number3;

	//display adjacency list
	for (auto const& pair : nodes) {
		cout << "Node " << pair.first << ": ";
		for (int next : pair.second) {
			cout << next << " ";
		}
		cout << endl;
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
