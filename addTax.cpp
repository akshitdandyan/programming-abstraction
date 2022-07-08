#include <iostream>
using namespace std;

int main() {
    float amount;
    cin >> amount;
    float tax = (amount * 8) / 100;
    cout << amount + tax;
    return 0;
}