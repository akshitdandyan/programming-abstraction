#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int id;
    string classGroup;

    Student(string name, int id, string classGroup) :name(name), id(id), classGroup(classGroup) {}

    void saveStudent() {
        ofstream myFile;
        myFile.open("students.txt", ios::app);
        myFile << name << " " << id << " " << classGroup << endl;
        myFile.close();
    }

    void print() {
        cout << "ID: " << id << " Name: " << name << " Class Group: " << classGroup << endl;
    }
};

// Student getStudentById(int id) {
//     string line;
//     ifstream studentDB("students.txt");
//     if (studentDB.is_open()) {
//         while (getline(studentDB, line)) {
//             cout << "Student: " << line << endl;

//         }
//         studentDB.close();
//     }
//     else {
//         cout << "No students data saved yet";
//     }
// }

void printAllStudents() {
    string line;
    ifstream studentDB("students.txt");
    if (studentDB.is_open()) {
        while (getline(studentDB, line)) {
            cout << "Student: " << line << endl;
        }
        studentDB.close();
    }
    else {
        cout << "No students data saved yet";
    }
}

int main() {
    Student s1("Akshit", 1, "XII");
    Student s2("Shanaya", 2, "XII");
    Student s3("James", 3, "XI");
    Student s4("Shagun", 4, "IX");
    Student s5("Kevin", 5, "V");

    int totalStudents;
    cout << "Enter total students" << endl;
    cin >> totalStudents;

    for (int i = 0; i < totalStudents;i++) {
        cout << "Enter name, id & classgroup of student " << i + 1 << endl;
        string name, classGroup;int id;
        cin >> name;
        cin >> id;
        cin >> classGroup;
        Student s(name, id, classGroup);
        s.saveStudent();
    }

    printAllStudents();


    return 0;
}