#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* ptr1 = &var;
    int* ptr2 = NULL;
    // ptr2 = ptr1;
    cout << ptr2;
    return 0;
}