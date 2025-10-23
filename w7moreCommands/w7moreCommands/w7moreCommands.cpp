/* More Commands - Week 7

* Adalyn Behan

* 10/7/25

*  What are the Functions isFull( ), isEmpty( ) and peek( )? How are they used?

Add to your example
*/

#include <iostream>
using namespace std;

#define SIZE 5  // Max size of the queue

class MyQueue {
private:
    int arr[SIZE];
    int front, rear;

public:
    MyQueue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return front > rear;
    }

    bool isFull() {
        return rear == SIZE - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[++rear] = x;
        
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyQueue q;
    cout << "Adalyn Behan, More Commands Assignement, 10/7/25" << endl;
    // push
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // peek
    cout << "Peek: " << q.peek() << endl; 

    // removes 1
    q.pop();

    // Show modified peek
    cout << "Modified Peek: " << q.peek() << endl;  

    // check full and empty
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    // display
    q.display();  
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
