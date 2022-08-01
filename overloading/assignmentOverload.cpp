#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // copy constructor
    Distance(const Distance& d) {
        cout << "copy constructor" << endl;
        feet = d.feet;
        inches = d.inches;
    }

    void operator=(const Distance& d) {
        feet = d.feet;
        inches = d.inches;
    }

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

int main() {

    Distance d1(5, 6), d2(7, 8);
    cout << "d1 ";
    d1.display();
    cout << "d2 ";
    d2.display();

    d1 = d2;

    cout << "d1 ";
    d1.display();

    Distance d3(d1);
    cout << "d3 ";
    d3.display();



    return 0;
}