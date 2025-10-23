/* Lab 5 - Week 8
 
* Adalyn Behan

* 10/23/25
*
* Using Stacks, create a program that will read a string in postfix form and then evaluate the result

create a video that explains the program and demonstrates the output

*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<string> s;
    string input;

    cout << "Adalyn Behan, Lab 5, 10/23/25" << endl;
    cout << "\nEnter an expreassion in postfix form: ";

	getline(cin, input);

    // postfix eval works by reading the last two numbers in the sequence and using the first available operater, then moving backwards until there are no more operators left

    for (char c : input) {   //Iterate through each character in the string
		if (isdigit(c)) {   // If the character is a digit push to stack
            s.push(string(1, c));
        } else {
			int b = stoi(s.top()); s.pop();   // Pop the top two elements for operation
            int a = stoi(s.top()); s.pop();
            int result; 
			switch (c) {       // Perform the operation based on the operator
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
            }
			s.push(to_string(result));   // Push the result back to stack
        }
    }
    cout << "The result is: " << s.top() << endl;

    cout << "\n This is the end of the program." << endl;

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
