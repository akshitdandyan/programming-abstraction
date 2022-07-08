#include <iostream>
using namespace std;

int main() {
    int totalStudents;
    cout << "Enter total students" << endl;
    cin >> totalStudents;

    do {
        float cgpa;
        cout << "Enter cgpa" << endl;
        cin >> cgpa;
        const int marks = cgpa;
        switch (marks)
        {
        case 10:
            cout << "O" << endl;
        case 9:
            cout << "E" << endl;
            break;
        case 8:
            cout << "VG" << endl;
            break;
        case 7:
            cout << "G" << endl;
            break;
        case 6:
            cout << "Fair" << endl;
            break;
        case 5:
            cout << "Fair" << endl;
            break;
        case 4:
            cout << "Satisfied" << endl;
            break;
        case 3:
            cout << "Reappear" << endl;
            break;
        case 2:
            cout << "Reappear" << endl;
            break;
        case 1:
            cout << "Reappear" << endl;
            break;
        default:
            cout << "Bad" << endl;
            break;
        }
        totalStudents--;
    } while (totalStudents > 0);

    return 0;
}