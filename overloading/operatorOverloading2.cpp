#include <iostream>
using namespace std;

class complex {
    float Real;
    int img;
public:
    complex() {
        cout << "Default Constructor" << endl;
    }
    complex(float r, int i) : Real(r), img(i) {
        cout << "Overloaded Constructor" << endl;
    }
    void print() {
        cout << "Real: " << Real << "Img: " << img << endl;
    }
    friend complex operator + (complex o1, complex o2);
    friend complex operator + (complex o1, float o2);
    friend complex operator + (float o1, complex o2);
};

complex operator + (complex o1, complex o2) {
    complex res;
    res.Real = o1.Real + o2.Real;
    res.img = o1.img + o2.img;
    return res;
}

complex operator + (complex o1, float o2) {
    complex res;
    res.Real = o1.Real + o2;
    res.img = o1.img;
    return res;
}

complex operator + (float o1, complex o2) {
    complex res;
    res.Real = o1 + o2.Real;
    res.img = o2.img;
    return res;
}



int main() {

    complex c1 = complex(10, 20);
    complex c2 = complex(10, 20);
    complex c3 = c1 + c2;
    c3.print();
    complex c4 = c1 + 10;
    c4.print();
    complex c5 = 10 + c1;

    return 0;
}