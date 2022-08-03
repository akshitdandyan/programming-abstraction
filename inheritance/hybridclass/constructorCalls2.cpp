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
class B : public A {
public:
    B() {
        cout << "B default constructor" << endl;
    }
    B(int val1, int val2) : A(val2) {
        cout << "B constructor" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "C default constructor" << endl;
    }
    C(int val1, int val2) : B(val1, val2) {
        cout << "C constructor" << endl;
    }
};

int main() {

    C test = C(20, 30);

    return 0;
}