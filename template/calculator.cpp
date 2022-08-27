#include <iostream>
#include <vector>
using namespace std;

template <class T>class extendedVector : public vector<T> {

};

template <class T> class calculator {
public:
    T x, y;
    calculator(T x, T y) :x(x), y(y) {}
    T sum() {
        return x + y;
    }
    T diff() {
        return x - y;
    }
    T product() {
        return x * y;
    }
    template <class S> S div() {
        return S(x) / S(y);
    }
};

int main() {

    calculator<float> c(4.2, 0.2);
    cout << "Sum: " << c.sum() << endl;
    cout << "Diff: " << c.diff() << endl;
    cout << "Product: " << c.product() << endl;
    cout << "Div: " << c.div<float>() << endl << endl;

    calculator<int> c1(33, 2);
    cout << "Sum: " << c1.sum() << endl;
    cout << "Diff: " << c1.diff() << endl;
    cout << "Product: " << c1.product() << endl;
    cout << "Div: " << c1.div<float>() << endl;

    return 0;
}