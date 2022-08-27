#include <iostream>
using namespace std;

void display() {
    throw 1;
}

void div() {
    try
    {
        display();
    }
    catch (int e) {
        cout << "[div] Exception occured " << e << endl;
        throw e;
    }

}

int main() {
    try {
        div();
    }
    catch (int e) {
        cout << "[main] Exception occured " << e << endl;
        throw;
    }
    catch (...) {
        cout << "[main] Unknown exception occured" << endl;
    }
    return 0;
}