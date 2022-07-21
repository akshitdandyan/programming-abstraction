#include <iostream>
using namespace std;

// size of object
// address of object
// address members

struct Student {
    string name;
    double roll;
    char gender;
} p2;

int main() {
    Student akshit;
    akshit.name = "Akshit";
    akshit.roll = 1;
    akshit.gender = 'm';

    // size of akshit
    cout << "Size of akshit: " << sizeof(akshit) << endl;
    // address of akshit
    cout << "Address of akshit: " << &akshit << endl;
    // address of akshit.name
    cout << "Address of akshit.name: " << &akshit.name << endl;
    // address of akshit.roll
    cout << "Address of akshit.roll: " << &akshit.roll << endl;


    return 0;
}