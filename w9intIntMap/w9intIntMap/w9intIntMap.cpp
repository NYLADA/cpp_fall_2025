/* Int Int Maps - Week 9

* Adalyn Behan

* 10/7/25

*
*/

#include <iostream>
#include<map>
using namespace std;

int main(){
    cout << "\nAccount # \tBalance\n" << endl;

    map <int, double> account;

    account.insert(make_pair(1234, 143.21));

    account.insert(make_pair(3456, 165.43));

    account.insert(make_pair(6789, 198.76));

    for (auto pb : account) {

        cout << "\n" << pb.first << "  " << pb.second;

    }

    cout << "\n\n";

    account[1234] += 350;

    account[6789] -= 40;

    for (auto pb : account) {

        cout << "\n" << pb.first << "  " << pb.second;

    }

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
