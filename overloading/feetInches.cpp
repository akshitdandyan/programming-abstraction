#include <iostream>
using namespace std;

class Feet {
public:
    float val;

    Feet() {};
    Feet(float feet) {
        this->val = feet;
    }

    // Not possible:
    // Feet(const Inch& i) {
    //     this->val = (float)i.val / 12;
    // }
    // void operator=(const Inch& i) {
    //     this->val = (float)i.val / 12;
    // }

};

class Inch {
public:
    int val;

    Inch() {};
    Inch(int inch) {
        this->val = inch;
    }

    Inch(Feet& f) {
        const int inches = (int)(f.val * 10) % 10;
        this->val = (int)f.val * 12 + inches;
    }

    void operator=(const Feet& f) {
        const int inches = (int)(f.val * 10) % 10;
        this->val = (int)f.val * 12 + inches;
    }


};

int main() {

    Feet f(3.2);
    Inch i = Inch(f);
    cout << i.val << endl;

    Feet f2(4);
    Inch i2 = f2;
    cout << i2.val << endl;;

    return 0;
}