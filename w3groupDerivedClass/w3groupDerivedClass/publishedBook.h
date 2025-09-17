#ifndef PUBLISHEDBOOK_H
#define PUBLISHEDBOOK_H

#include "Publisher.h"
#include "Book2.h"
#include <iostream>
#include <string>
using namespace std;

class PublishedBook : public Book, public Publisher {
protected:
	string ISBN; // new attribute for ISBN
    

public:
    PublishedBook(string t, string a, int p, int c, string name, int year,
        string isbn)
        : Book(t, a, p, c), Publisher(name, year), ISBN(isbn) {
    }

    void display() const {  // display function
        Book::display();
        Publisher::display();
        cout << "ISBN:" << ISBN << endl;
    }
};

#endif
