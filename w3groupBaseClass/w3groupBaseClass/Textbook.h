#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <iostream>
#include <string>
#include "Book1.h"
using namespace std;

class Textbook : public Book {
private:
    string subject;
    int edition;

public:
    Textbook(string t, string a, int p, string s, int e)
        : Book(t, a, p), subject(s), edition(e) {
    }

    void display() const {
        Book::display(); // Show base attributes
        cout << "Subject: " << subject << endl;
        cout << "Edition: " << edition << endl;
    }
};

#endif 