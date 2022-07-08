#include <iostream>

using namespace std;

int main() {
    // make variables with all data types
    int i = 0;
    short short_ = 2;
    unsigned int ui = 0;
    float f = 0.0;
    double d = 0.0;
    char c = 'a';
    string s = "hello";
    bool b = true;
    long long a = 1;
    long double ld = 69;
    // print thier memory size
    cout << "Memory size of int: " << sizeof(i) << endl;
    cout << "Memory size of short: " << sizeof(short_) << endl;
    cout << "Memory size of unsigned int: " << sizeof(ui) << endl;
    cout << "Memory size of float: " << sizeof(f) << endl;
    cout << "Memory size of double: " << sizeof(d) << endl;
    cout << "Memory size of char: " << sizeof(c) << endl;
    cout << "Memory size of string: " << sizeof(s) << endl;
    cout << "Memory size of bool: " << sizeof(b) << endl;
    cout << "Memory size of long long " << sizeof(a) << endl;
    cout << "Memory size of long double " << sizeof(ld) << endl;

    return 0;

}