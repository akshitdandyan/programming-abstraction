#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    int counter = 5;

    for (;counter;) {
        cout << counter-- << endl;
        if (counter < 1) {
            flag = false;
        }
    }

    int c2 = 8;
    do
    {
        cout << c2-- << endl;
    } while (c2);

    return 0;
}