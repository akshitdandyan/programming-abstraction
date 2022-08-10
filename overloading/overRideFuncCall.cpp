#include <iostream>
using namespace std;

class Base {
public:
    int b;
    virtual void show() {
        cout << "Show() in Base" << endl;
        cout << "b = " << b << endl;
    }
};

class Derived : public Base {
public:
    int d;

    void show() {
        // Base::show(); // calls show function of base class
        cout << "Show() in Derived" << endl;
        cout << "d = " << d << " b = " << b << endl;
    }
};

int main() {

    Derived d;
    d.b = 1;
    d.d = 2;
    d.show();

    Base* b = new Derived();

    // Derived* d2 = new Base(); //a value of type "Base *" cannot be used to initialize an entity of type "Derived *"

    b->show();
    // cout << b->d; // error: has no member d



    delete b;

    return 0;
}