#include <iostream>
using namespace std;

class Circle {

    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    ~Circle() {
        cout << "Circle destroyed" << endl;
        // free(this);
    }

};

int main() {

    // ways to create object
    Circle c1(10.0);
    Circle c2 = 10.0;
    Circle c3 = { 10.0 };
    Circle c4 = Circle(10.0);

    // calling destructor
    cout << "*";
    c4.~Circle();//explicit call to destructor, that's why prints destroyed multiple times;
    cout << "*";
    Circle c5 = 10.00;

    return 0;
}