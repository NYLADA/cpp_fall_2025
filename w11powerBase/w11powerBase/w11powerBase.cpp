/* Power & Base - Week 11

* Adalyn Behan

* 11/5/25

*  Use Recursion to calculate x^y where x is the base of a # and y is the power of a number.

*/
#include <iostream>
using namespace std;

int power(int x, int y) {
    if (y == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    }
    else {
        return x * power(x, y - 1); // Recursive case
    }
}
int main(){
    cout << "Adalyn Behan, 11/5/25, Power & Base Assignment" << endl;
    int base;
    int exp;
    int result;

    cout << "Enter a base number: ";
	cin >> base;
   
    cout << "\nEnter an exponent number: ";
	cin >> exp;
    
    result = power(base, exp);
    cout << "\n" << base << " to the power of " << exp << " is: " << result << endl;

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
