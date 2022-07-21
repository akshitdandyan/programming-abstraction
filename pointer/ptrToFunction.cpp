#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int operation(int(*function)(int, int), int a, int b) {
    return function(a, b);
}

int multipleOperations(int(*funcCalls[])(int, int), int a, int b, int totalFuncs) {
    for (int i = 0; i < totalFuncs; i++) {
        cout << funcCalls[i](a, b) << endl;
    }
}

int main() {

    cout << operation(sum, 1, 2) << endl;
    cout << operation(diff, 1, 2) << endl;

    int (*funcCalls[])(int, int) = { sum, diff };
    multipleOperations(funcCalls, 4, 5, 2);

    return 0;
}