#ifndef PUBLISHER_H
#define PUBLISHER_H


#include <iostream>
#include <string>
using namespace std;

class Publisher {
protected:
    string publisherName;
    int yearPublished;
    

public:
    Publisher(string n, int y) 
        : publisherName(n), yearPublished(y) {}

    void display() const {  // display function
        cout << "Publisher Name: " << publisherName << endl;
        cout << "Year Published " << yearPublished << endl;
    }
};

#endif
