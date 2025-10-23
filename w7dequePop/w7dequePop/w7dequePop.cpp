/* Dequeue & Pop - Week 7

* Adalyn Behan

* 10/7/25

*  What is dequeue? When we pop( ) the Queue, where does it remove the data from?

Create a Character Queue and push the letters a,b,c & d on to the Queue. 

  Create a Display( ) Function that will display the values of the Queue. Note that this should solve the Empty Queue problem.

  Use the pop command and then redisplay the letters. which letter was removed?

How does this compare with a Stack?
*/

#include <iostream>
#include <queue>
using namespace std;

void display(queue<char> c) {
    if (c.empty()) {
        cout << "The queue is empty." << endl;
        return;
    }

    while (!c.empty()) {
        cout << c.front() << " ";
        c.pop();
    }
    cout << endl;
    
}
int main(){
    queue<char> c;

    c.push('a');
	c.push('b');
	c.push('c');
    c.push('d');

    cout << "Orignial Queue: " << endl;
    display(c);  // display queue

    c.pop(); //pop the queue

    cout << "Modified queue: " << endl;
	display(c); // display queue again

    // In a stack, the last element would be removed, but in the queue the first element is removed. 
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
