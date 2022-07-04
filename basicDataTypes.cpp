#include <iostream>

using namespace std;

int main() {
    // make variables with all data types
    int i = 0;
    float f = 0.0;
    double d = 0.0;
    char c = 'a';
    string s = "hello";
    bool b = true;
    // print thier memory size
    cout << "Memory size of int: " << sizeof(i) << endl;
    cout << "Memory size of float: " << sizeof(f) << endl;
    cout << "Memory size of double: " << sizeof(d) << endl;
    cout << "Memory size of char: " << sizeof(c) << endl;
    cout << "Memory size of string: " << sizeof(s) << endl;
    cout << "Memory size of bool: " << sizeof(b) << endl;

    return 0;

}