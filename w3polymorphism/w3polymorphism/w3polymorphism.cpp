/* Polymorphism - Week 3

* Adalyn Behan

* 9/3/25

* What is Polymorphism? How can Base inherit from derived?

  Create an example and demonstrate the Base using the Derived Attributes
*/

#include <iostream>
#include <string>
using namespace std;

class Character {
public:
    virtual void describe() const {
        cout << "I am a main character." << endl;
    }
    virtual ~Character() {}
};

class Wizard : public Character {
private:
    int mana;               // specific attributes
    string spell;

public:
    Wizard(int m, string s) : mana(m), spell(s) {}    // constructor initializing attributes

    void describe() const override {   // overriding base class method
        cout << "I am a wizard with " << mana << " mana, casting " << spell << "." << endl;
    }

    void castSpell() const {
        cout << "Casting " << spell << "!" << endl;
    }
};

int main() {
    cout << "Adalyn Behan, Polymorphism, 9/10/25" << endl;
    Wizard wiz(100, "Fireball");

    Character& ref = wiz;

    ref.describe();   //calls describe
    wiz.castSpell();  // calls castSpell
    

    cout << "End of program." << endl;

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
