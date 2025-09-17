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
    int chapters;

public:
    Book(string t, string a, int p, int c) 
        : title(t), author(a), pages(p), chapters(c) {}

    void display() {  // display function
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Chapters: " << chapters << endl;
    }
};

#endif
