#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display()\n";
    }
    virtual void show() {
        cout << "Show() in Base" << endl;
    }
};

class Derived :public Base {
public:
    void display() {
        cout << "Derived class display()\n";
    }
    void show() {
        cout << "Show() in Derived" << endl;
    }
};

int main() {
    Base Obj;
    Derived dObj;
    Base* bptr;
    cout << "Base class pointer pointing to Base class object \n";
    bptr = &Obj;
    bptr->display();
    bptr->show();
    bptr = &dObj;
    cout << "Base class pointer pointing to Derived class object \n";
    bptr->display();
    bptr->show();


    return 0;
}
