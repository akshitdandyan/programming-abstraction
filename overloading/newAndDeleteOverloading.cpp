#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student() {
        cout << "Default Constructor" << endl;
    }

    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void* operator new(size_t size) {
        cout << "Overloaded new" << endl;
        void* p = ::operator new(size);
        return p;
    }

    void operator delete(void* p) {
        cout << "Overloaded delete" << endl;
        free(p);
    }
};

int main() {

    Student* s = new Student("John", 20);
    s->display();
    delete s;

    return 0;
}