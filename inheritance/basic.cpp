#include <iostream>
using namespace std;

class A {
public:
    int publicVal;
protected:
    int protectedVal;
private:
    int privateVal;
};

class B : public A {
public:
    void display() {
        cout << "publicVal: " << publicVal << endl;
        cout << "protectedVal: " << protectedVal << endl;
    }
    void setProtectedVal(int val) {
        protectedVal = val;
    }
    int getProtectedVal() {
        return protectedVal;
    }
};

int main() {
    B objb;
    objb.publicVal = 10;
    objb.setProtectedVal(20);

    objb.display();

    return 0;
}