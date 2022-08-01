#include <iostream>
using namespace std;

const int vsize = 3;

class vector {
    int v[vsize];
public:
    vector();
    vector(int* x);
    friend vector operator+ (int a, vector b);
    friend vector operator+ (vector a, int b);
    friend istream& operator >> (istream&, vector&);
    friend ostream& operator<<(ostream&, vector&);
};

vector::vector() {
    for (int i = 0; i < vsize; i++) {
        v[i] = 0;
    }
}

vector::vector(int* x) {
    for (int i = 0; i < vsize; i++) {
        v[i] = x[i];
    }
}

vector operator+ (int a, vector b) {
    vector res;
    for (int i = 0; i < vsize; i++) {
        res.v[i] = a + b.v[i];
    }
    return res;
}

vector operator+ (vector a, int b) {
    vector res;
    for (int i = 0; i < vsize; i++) {
        res.v[i] = a.v[i] + b;
    }
    return res;
}

istream& operator >> (istream& in, vector& v) {
    for (int i = 0; i < vsize; i++) {
        in >> v.v[i];
    }
    return in;
}

ostream& operator<<(ostream& out, vector& v) {
    for (int i = 0; i < vsize; i++) {
        out << v.v[i] << " ";
    }
    return out;
}

int main() {
    int a[vsize] = { 1, 2, 3 };
    vector v1(a);
    cout << "v1: " << v1 << "\n";

    vector m;
    vector n = a;
    cout << "Enter the elements of m \n";
    cin >> m;
    cout << "\nm: " << m << "\n";
    vector p, q;
    p = 2 + m;
    q = m + 2;
    cout << "\np:" << p << "\n";
    cout << "\nq:" << q << "\n";


    return 0;
}