#include <iostream>
using namespace std;

// write a program to input time in seconds and convert them to hours, minutes and seconds
// int formatTime(int seconds) {
//     int hours = seconds / 3600;
//     int minutes = (seconds % 3600) / 60;
//     int seconds_left = seconds % 60;
//     cout << hours << ":" << minutes << ":" << seconds_left << endl;
//     return 0;
// }

int formatTime(int seconds) {
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int seconds_left = seconds % 60;
    cout << hours << ":" << minutes << ":" << seconds_left << endl;
    return 0;
}

int main() {
    // int y, x;
    // y = 2 + (x = 5);
    // cout << y << endl;
    // cout << x << endl;
    int sec;
    cin >> sec;
    cout << formatTime(sec) << endl;
    int z = 10;
    int y = 20;
    cout << z++ + ++y;
    return 0;
}