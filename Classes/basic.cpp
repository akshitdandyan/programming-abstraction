#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    int standard;
    string name;

    Student(int r, int s, string n) {
        rollNo = r;
        standard = s;
        name = n;
    }

    void printStudent() {
        cout << "Name: " << name << " Roll No: " << rollNo << " Standard: " << standard << endl;
    }

};

int main() {

    Student Akshit = Student(1, 1, "Akshit");
    Student James(2, 2, "James");

    Akshit.printStudent();
    James.printStudent();

    return 0;
}