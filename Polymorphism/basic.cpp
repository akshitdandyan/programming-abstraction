#include <iostream>
using namespace std;

class Base {
public:
    int b;
    virtual void show() {
        cout << "Show() in Base, b = " << b << endl;
    }
};

class Derived :public Base {
public:
    int  d;
    void show() {
        cout << "Show() in Derived, d = " << d << ", b = " << b << endl;
    }
};

int main() {

    Base* bptr;
    Base baseObj;
    bptr = &baseObj;
    bptr->b = 10;
    cout << "Base class pointer pointing to Base class object \n";
    bptr->show();
    Derived derivedObj;
    bptr = &derivedObj;
    bptr->b = 90;
    // bptr->d = 20; // not allowed
    cout << "Base class pointer pointing to Derived class object \n";
    bptr->show();

    Derived* dptr;
    dptr = &derivedObj;
    dptr->d = 300;
    cout << "Derived class pointer pointing to Derived class object \n";
    dptr->show();
    cout << "using the typecasting of derived class ponter on base class pointer\n";
    ((Derived*)bptr)->d = 400;
    ((Derived*)bptr)->show();

    return 0;
}
