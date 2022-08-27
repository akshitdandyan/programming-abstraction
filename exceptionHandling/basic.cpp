#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw ("B shouldn't be 0");
    return   a / b;
}

int divide2(int a, int b) {
    try
    {
        if (b == 0)
        {
            throw ("B shouldn't be 0");
        }
        divide(a, b);
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
    catch (...) {
        cout << "Unknown exception occured" << endl;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    try
    {
        cout << divide(a, b);
    }
    catch (const char* msg)
    {
        cout << msg << endl;
        throw;
    }
    catch (...) {
        cout << "Unknown exception occured" << endl;
    }
    // divide2(a, b);

    return 0;
}