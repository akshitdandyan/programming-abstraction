#include <iostream>
using namespace std;

// *      *
// **    **
// ***  ***
// ********

int main() {

    int n;
    cin >> n;
    int spaces = (n * 2) - 2;
    for (int i = 1; i <= n; i++) {
        // stars
        for (int star = 1; star <= i;star++) {
            cout << "*";
        }
        // spaces
        for (int space = 1; space <= spaces;space++) {
            cout << " ";
        }
        spaces -= 2;
        for (int star = 1; star <= i;star++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}