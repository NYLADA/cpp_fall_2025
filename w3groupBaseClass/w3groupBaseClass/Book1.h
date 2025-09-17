#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    int pages;
    

public:
    Book(string t, string a, int p) 
        : title(t), author(a), pages(p), {}

    void display() {  // display function
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

#endif
