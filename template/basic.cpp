#include <iostream>
using namespace std;

template <class T, class S> T sum(T x, S y)
{
    return x + y;
}

int main() {
    cout << sum(1, 2) << endl;
    cout << sum<int, float>(1, 2.22) << endl;
    cout << sum(0.123, 2.000000) << endl;
    return 0;
}