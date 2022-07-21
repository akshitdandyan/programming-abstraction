#include <iostream>
using namespace std;

//    *
//   ***
//  ******
// ********

int main() {
    int n;
    cin >> n;
    int spaces = n - 1;
    int stars = 1;
    for (int i = 1; i <= n;i++) {
        for (int space = 1;space <= spaces;space++) {
            cout << " ";
        }
        for (int j = 1; j <= stars;j++) {
            cout << "*";
        }
        cout << endl;
        stars += 2;
        spaces--;

    }
    return 0;
}