#include <iostream>
using namespace std;


class A {
public:
    A() {
        cout << "A default constructor" << endl;
    }
    A(int val) {
        cout << "A constructor" << endl;
    }
};
class B {
public:
    B() {
        cout << "B default constructor" << endl;
    }
    B(int val) {
        cout << "B constructor" << endl;
    }
};

class C : private A, public B {
public:
    C() {
        cout << "C default constructor" << endl;
    }
    C(int val) : A(val), B(val) {
        cout << "C constructor" << endl;
    }
};

int main() {

    C test = C(20);

    return 0;
}