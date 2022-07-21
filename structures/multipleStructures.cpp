#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    string state;
    int zip;
};

struct Student {
    int rollNo;
    string name;
    Address address;
};

struct str {
    string a;
};

int main() {
    str a = { a:"HELLO" };
    string aa = "adkm";
    cout << "size of aa" << sizeof(aa) << endl;

    cout << "size of a " << sizeof(a) << endl;

    Student G22[10];

    G22[0].name = "Akshit";
    G22[0].rollNo = 1135;
    G22[0].address.street = "ABC";
    G22[0].address.city = "Pune";
    G22[0].address.state = "Maharashtra";
    G22[0].address.zip = 411014;
    cout << "Student 0 city: " << G22[0].address.city << endl;


    G22[1].name = "Vidhu";
    G22[1].rollNo = 1345;

    G22[2].name = "Kirti";
    G22[2].rollNo = 3555;

    G22[3].name = "Vinayak";
    G22[3].rollNo = 4593;

    // print
    for (int i = 0; i < 4; i++) {
        cout << "Student: " << G22[i].name << " Roll: " << G22[i].rollNo << endl;
    }

    return 0;
}