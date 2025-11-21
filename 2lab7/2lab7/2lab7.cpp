/* Lab 7 - Week 12

* Adalyn Behan

* 11/5/25

* Write the .h program for a Binary Tree to use Characters (1 char & 2 nodes).
    Write a Method to create Nodes and using ‘m’ as the root, create a Tree for your
    1st (& last) name.
    Load your name as the leaves of the Tree. Left for alphabetically first and Right
    for second.
    Create 3 Methods involving InOrder, PreOrder and PostOrder Traversals. Display
    your characters with each method( ).
    Create a main.cpp that will connect to the .h, create an Object, Load the Tree
    and display the characters in each form

*/
#include "lab7.h"

int main()
{
    cout << "Adalyn Behan, Lab 7, 11/21/25" << endl;

    binaryTree tree;

    // Create root 'm'
    tree.createRoot('T');

    // Compare first and last name alphabetically
    string firstName = "Adalyn";
    string lastName = "Behan";

    char leftNode;
    char rightNode;

    if (firstName < lastName) { 
        leftNode = firstName[0];  // first character in first name
        rightNode = lastName[0];  // first character in last name
    }
    else {
        leftNode = lastName[0]; 
        rightNode = firstName[0];
    }

    // Add children
    tree.nodes(leftNode, rightNode);

    // Display traversals
    tree.displayInOrder();
    tree.displayPreOrder();
    tree.displayPostOrder();


    cout << "This is the end of the program" << endl;
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
