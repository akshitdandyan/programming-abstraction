#include <iostream>
using namespace std;

void output(int r, float c, string g) {
    cout << "Roll No.: " << r << endl;
    cout << "Cgpa.: " << c << endl;
    cout << "Gender.: " << g << endl;
}

int main() {
    int roll;
    float cgpa;
    string gender;
    cout << "Enter roll number, cgpa & gender" << endl;
    cin >> roll >> cgpa;
    cin >> gender;
    output(roll, cgpa, gender);
}