#include <iostream>
#include <vector>
using namespace std;

template <class A> A sum(A x, A y)
{
    return x + y;
}

template<class T>class Sample {
public:
    T a, b;
    Sample() {};
    Sample(T a, T b) :a(a), b(b) {};
    T sum() {
        return a + b;
    }
};

int main() {

    // cout << sum(1.1, 0.9) << endl;
    Sample <int> s(1, 2);
    cout << s.sum() << endl;
    Sample <float> s1(2.3, 3.4);
    cout << s1.sum() << endl;

    return 0;
}