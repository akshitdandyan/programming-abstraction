#include <iostream>
#include <cstring>
using namespace std;

class str {
    char* p;
    int len;
public:
    str() {
        len = 0;
        p = 0;
    }

    str(const char* t) {
        len = strlen(t);
        p = new char[len + 1];
        strcpy(p, t);
    }

    // copy constructor
    str(const str& s) {
        cout << "copy constructor" << endl;
        len = s.len;
        p = new char[len + 1];
        strcpy(p, s.p);
    }

    void printStr() {
        cout << p << endl;
    }

    friend str operator+(const str& s1, const str& s2);
    friend int operator<=(const str& s1, const str& s2);
    friend int operator>=(const str& s1, const str& s2);

    //destructor
    ~str() {
        cout << "destructor" << endl;
        delete p;
    }

};

str operator+(const str& s1, const str& s2) {
    str s;
    s.len = s1.len + s2.len;
    s.p = new char[s.len + 2];
    strcpy(s.p, s1.p);
    strcat(s.p, " ");
    strcat(s.p, s2.p);
    return s;
}

int operator <= (const str& s1, const str& s2) {
    if (s1.len <= s2.len)
        return 1;
    else
        return 0;
}

int operator >= (const str& s1, const str& s2) {
    if (s1.len >= s2.len)
        return 1;
    else
        return 0;
}

int main() {

    str s1("Hello");
    str s2("Long Helloooo");
    str s3 = s1 + s2;
    s3.printStr();
    if (s2 <= s1)
        cout << "s2 is less than or equal to s1" << endl;
    else
        cout << "s2 is greater than s2" << endl;

    if (s2 >= s1)
        cout << "s2 is greater than or equal to s1" << endl;
    else
        cout << "s2 is less than s1" << endl;


    // using copy constructor
    str s4 = s1;
    s4.printStr();

    // delete all the objects
    s1.~str();
    s2.~str();
    s3.~str();
    s4.~str();


    return 0;
}