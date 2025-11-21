/* Code Trees - Week 12

* Adalyn Behan

* 11/5/25

*  Write a class or struct Node with an int as data and a left and right pointer.

Create a Method that will create a new node assign the transferred # to data and create 2 new links (left and right)

Add nodes and data to code your Tree from the previous Questions

*/

#include "codingTrees.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Adalyn Behan, Coding Trees Assignment, 11/5/25" << endl;
    // root node
    Node* root = createNode(1);

    // branches to the left
    root->left = createNode(3);
    root->left->left = createNode(6);
    root->left->right = createNode(7);

    // branches to the right
    root->right = createNode(2);
    root->right->left = createNode(4);
    root->right->right = createNode(5);

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
