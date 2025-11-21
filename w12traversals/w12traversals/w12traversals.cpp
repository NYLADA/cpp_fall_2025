/* Traversals - Week 12

* Adalyn Behan

* 11/5/25

*  What are the 3 Traversals? and How are they accomplished?

Create a video and Traverse your Binary Tree from Q1 in all 3 Forms (PreOrder, InOrder & PostOrder)

List the #s generated from each set

*/

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};
Node* createNode(int value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}
 // you shouldnt return nothing into a void function, thats bad coding. 
void preDisplay(Node* root) {
	if (root == nullptr) {  //base case 
        return;
    }
    else {
		cout << root->data << " ";  //process the root
		preDisplay(root->left);  //traverse the left subtree
		preDisplay(root->right);   //traverse the right subtree
    }
}
void inDisplay(Node* root) {
	if (root == nullptr) {  //base case 
		return;
	}
	else {
		inDisplay(root->left);  //traverse the left subtree
		cout << root->data << " ";  //process the root
		inDisplay(root->right);   //traverse the right subtree
	}
}
void postDisplay(Node* root) {
	if (root == nullptr) {  //base case 
		return;
	}
	else {
		postDisplay(root->left);  //traverse the left subtree
		postDisplay(root->right);   //traverse the right subtree
		cout << root->data << " ";  //process the root
	}
}

int main(){
    cout << "Adalyn Behan, Traversals Assignment, 11/5/25" << endl;
	// root node
	Node* root = createNode(1);
	// braches to the left
	root->left = createNode(3);
	root->left->left = createNode(6);
	root->left->right = createNode(7);
	// branches to the right	
	root -> right = createNode(2);
	root -> right ->left = createNode(4);
	root -> right -> right = createNode(5);

	cout << "PreOrder Traversal: " << endl;
	preDisplay(root);  //call the display function with the root node

	cout << "\nInOrder Traversal: " << endl;
	inDisplay(root);

	cout << "\nPostOrder Traversal: " << endl;
	postDisplay(root);

	cout << "\n\nThis is the end of the program." << endl;
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
