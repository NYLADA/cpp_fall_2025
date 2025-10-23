/* String String Maps - Week 9

* Adalyn Behan

* 10/7/25

*  Create a string string Map that will connect Relationship ("Family", "Co-Worker", "Friend") to specific People ("names")

  Add a name to each category

  Display categories and names
*/

#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
#include <string>
using namespace std;

int main(){
    cout << "Adalyn Behan, String String Maps Assignment, 10/23/25" << endl;

    unordered_map<string, list<string>> groups;
    list<string> familyNames = { "Kenma", "Wakatoshi", "Tetsuro" };
    list<string> coworkerNames = { "Atsumu", "Osamu", "Kiyoomi" };
	list<string> friendNames = { "Hinata", "Kageyama", "Yamaguchi" };

    groups["Family"] = familyNames;
	groups["Co-Worker"] = coworkerNames;
	groups["Friend"] = friendNames;

    for (auto& group : groups) {
        cout << group.first << ": ";
        for (const auto& name : group.second) {
            cout << name << ", ";
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
