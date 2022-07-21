#include <iostream>
using namespace std;

struct product {
    string name;
    float price;
} p2;

struct Student {
    string name;
    int roll;
} p2;

int main() {
    product p1;
    p1.name = "Milk";
    p1.price = 1.99;

    p2.name = "Table";
    p2.price = 4.99;

    cout << "Product: " << p1.name << " Price: " << p1.price << endl;
    cout << "Product: " << p2.name << " Price: " << p2.price << endl;

    Student Akshit;
    Akshit.name = "Akshit";
    Akshit.roll = 1;
    cout << "Student: " << Akshit.name << " Roll: " << Akshit.roll << endl;

    return 0;
}