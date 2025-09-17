#ifndef BOOK2_H
#define BOOK2_H

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
        : title(t), author(a), pages(p), chapters(c){}

    void display() const {  // display function
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Chapters: " << chapters << endl;
    }
};

#endif
