#include <iostream>
using namespace std;

// int main() {
//     int a = 1, b = 5;
//     cout << (a & b) << endl;
//     cout << (a | b) << endl;
//     cout << (a ^ b) << endl;
//     cout << (a >> 2) << endl;
//     cout << (a << 2) << endl;
//     cout << (~a) << endl;

//     return 0;
// }

int main() {
    // int a = 1, b = 4;
    // b += a -= 6;
    // cout << "a =" << a << endl;
    // cout << "b =" << b << endl;

    // float cgpa = 9.8;

    // if (cgpa >= 9 && cgpa <= 10) {
    //     cout << "Excellent" << endl;
    // }
    // else if (cgpa >= 5 && cgpa <= 8) {
    //     cout << "Good" << endl;
    // }
    // else {
    //     cout << "Bad" << endl;
    // }

    const int marks = 9;

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


    return 0;
}

// print numbers from 10 to 0
