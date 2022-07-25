#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    Box() {}
    Box(int l, int w, int h) : length(l), width(w), height(h) {}
    int volume() const { return length * width * height; }
    bool compare(Box box) {
        return this->volume() > box.volume();
    };
    Box* self() {
        return this;
    }
};

int main() {

    Box box1(10, 20, 30);
    Box box2(20, 30, 40);

    if (box1.compare(box2)) {
        cout << "Box1 is larger" << endl;
    }
    else {
        cout << "Box2 is larger" << endl;
    }


    return 0;
}