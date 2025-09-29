/* Lab 2 - Week 2

* Adalyn Behan

* 9/6/25

* Each prisoner 1-10 must find his own # that is randomy placed in boxes. 
    But each prisoner may only open half of the boxes. 
*/

#include <iostream>
#include <vector>
#include <random>  // default engine
#include <algorithm> // for shuffle
#include <ctime>  // for time
using namespace std;

int main() {
    vector<int> boxes = { 1,2,3,4,5,6,7,8,9,10 }; // initialize with 1–10
    shuffle(boxes.begin(), boxes.end(), default_random_engine(time(0)));

    cout << "Adalyn Behan, Lab 2, 9/28/25" << endl;
  
    for (int i = 1; i <= 10; i++) {
        int cell = i;
        int counter = 0;
        bool escaped = false;

        while (counter < 5) {
            int boxNum = boxes[cell - 1]; // adjust for 0-based index
            counter++;
            if (boxNum == i) {
                escaped = true;
                break;
            }
            else {
                cell = boxNum;
            }
        }

        if (escaped) {
            cout << "Prisoner " << i << " escaped in " << counter << " tries." << endl;
        }
        else {
            cout << "Prisoner " << i << " failed to escape in 5 tries." << endl;
        }
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
