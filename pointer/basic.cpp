#include <iostream>
using namespace std;

void output(int* r, float* c);

void sum(int a, int b) {
    cout << a + b << endl;
}
void sum(float a, float b) {
    cout << a + b << endl;
}
void sum(double a, double b) {
    cout << a + b << endl;
}

int main() {
    int rollNo;
    int* rollNoPtr;

    float cgpa;
    float* cgpaPtr;

    rollNo = 5;
    rollNoPtr = &rollNo;

    cgpa = 8.9;
    cgpaPtr = &cgpa;
    output(&rollNo, &cgpa);
    cout << "Inside main fn: " << *rollNoPtr << endl;

    cout << "Inside main fn: " << *cgpaPtr << endl;

    sum(5, 6);
    sum(5.5, 6.5);
    sum(56.52, 16.51);
    return 0;
}

void output(int* r, float* c) {
    cout << "From output fn: " << *r << endl;
    *c = *c + 0.2;
    cout << "From output fn: " << *c << endl;

}