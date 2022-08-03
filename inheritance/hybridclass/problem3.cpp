#include <iostream>
using namespace std;

class Marks {
    int english;
    int maths;
    int science;
public:
    Marks() {};
    Marks(int english, int maths, int science) {
        this->english = english;
        this->maths = maths;
        this->science = science;
    }

    float getPercentage() {
        return (english + maths + science) / 3;
    }

    int totalMarks() {
        return english + maths + science;
    }
};

class Student : public Marks {
    int admissionNumber;
    string name;
    Marks marks;
public:
    Student() {};
    Student(int admissionNumber, string name, int english, int maths, int science) {
        this->admissionNumber = admissionNumber;
        this->name = name;
        this->marks = Marks(english, maths, science);
    }

    void takeData() {
        cout << "Enter admission number: ";
        cin >> admissionNumber;
        cout << "Enter name: ";
        cin >> name;
        int eng, mat, sci;
        cout << "Enter marks in English, Maths, Science: ";
        cin >> eng >> mat >> sci;
        marks = Marks(eng, mat, sci);
    }

    void showData() {
        cout << "Admission number: " << admissionNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks.totalMarks() << endl;
        cout << "Percentage: " << marks.getPercentage() << endl;
    }
};

int main() {

    int totalStudents;
    cout << "Enter total students: ";
    cin >> totalStudents;
    const int k = totalStudents;

    Student students[totalStudents];
    for (int i = 0; i < k; i++) {
        students[i].takeData();
    }
    for (int i = 0; i < k; i++) {
        students[i].showData();
    }

    return 0;
}