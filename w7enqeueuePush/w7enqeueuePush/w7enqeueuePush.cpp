/* Enqueue & Push - Week 7

* Adalyn Behan

* 10/7/25

*  Create an STL example using integers for Both a Queue and a Stack.

Fill both structures with 5 numbers, and the display the values using a Function

pop each container twice and redisplay. How are they different? Explain
*/
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to display queue contents
void displayQueue(queue<int> q) {
    cout << "Display Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// Function to display stack contents
void displayStack(stack<int> s) {
    cout << "Display Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    stack<int> s;
    cout << "Adalyn Behan, Enqueue & Push Assignment, 10/7/25" << endl;

    // Fill both with 5 numbers
    for (int i = 1; i <= 5; ++i) {
        q.push(i);
        s.push(i);
    }

    // Display initial contents
    cout << "Original Queue/Stack:\n";
    displayQueue(q);
    displayStack(s);

    // pop each twice
    q.pop(); q.pop();  // removes the first two
    s.pop(); s.pop();  // removes the last two

    // display modified contents
    cout << "\nModified Queue/Stack:\n";
    displayQueue(q);
    displayStack(s);

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
