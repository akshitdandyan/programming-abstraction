#include <iostream>
using namespace std;

class num {
    int x;
public:
    num(int a) : x(a) {}
    // prefix
    void operator++() {
        cout << "Inc Prefix" << endl;
        x = x + 1;
    }
    //postfix
    void operator++(int) {
        cout << "Inc Postfix" << endl;
        x = x + 1;
    }
    // prefix
    void operator--() {
        cout << "Dec Prefix" << endl;
        x = x - 1;
    }
    //postfix
    void operator--(int) {
        cout << "Dec Postfix" << endl;
        x = x - 1;
    }
    void print() {
        cout << x << endl;
    }
};

int main() {

    num a(5);
    a++;
    a.print();
    a--;
    a.print();

    return 0;
}