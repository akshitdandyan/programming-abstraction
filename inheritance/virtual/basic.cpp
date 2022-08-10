#include <iostream>
using namespace std;

class A {
public:
    int var1;
};
class B : virtual public A {

};
class C : virtual public A {
};
class D : public B, public C {
};
int main() {
    D d;
    d.var1 = 1;
    return 0;
}