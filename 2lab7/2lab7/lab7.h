#ifndef LAB7_H
#define LAB7_H

#include <iostream>
#include <string>
using namespace std;

// Node structure
struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Binary Tree class
class binaryTree {
private:
    Node* root;

    // Recursive helpers
    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

    void preOrder(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
        
    }

    void postOrder(Node* node) {
        if (node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->data << " ";
        }
    }

public:
    binaryTree() {
        root = nullptr;
    }

    // Create root
    void createRoot(char val) {
        root = new Node(val);
    }

    // Attach left and right children
    void nodes(char leftVal, char rightVal) {
        if (root == nullptr) return;
        root->left = new Node(leftVal);
        root->right = new Node(rightVal);
    }

    // Traversal methods
    void displayInOrder() {
        cout << "InOrder Traversal: ";
        inOrder(root);
        cout << endl;
    }

    void displayPreOrder() {
        cout << "PreOrder Traversal: ";
        preOrder(root);
        cout << endl;
    }

    void displayPostOrder() {
        cout << "PostOrder Traversal: ";
        postOrder(root);
        cout << endl;
    }
};

#endif