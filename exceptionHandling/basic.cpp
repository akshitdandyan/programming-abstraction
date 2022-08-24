#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "B shouldn't be 0";
    return   a / b;

}

int main() {
    int a, b;
    cin >> a >> b;
    try
    {
        divide(a, b);
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
    catch (...) {
        cout << "Unknown exception occured" << endl;
    }

    return 0;
}