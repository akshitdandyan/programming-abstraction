#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    Box() {
        cout << "Default Constructor" << endl;

    }
    Box(int l, int w, int h) : length(l), width(w), height(h) {
        cout << "Overloaded Constructor" << endl;
    }

    // copy contructor
    Box(Box& box) {
        length = box.length;
        width = box.width;
        height = box.height;
        cout << "Copy Constructor" << endl;

    }
    int volume() const { return length * width * height; }
    bool compare(Box box) {
        return this->volume() > box.volume();
    };
    Box operator = (const Box& b) {
        cout << "Assignment Operator" << endl;
        this->height = b.height;
        this->length = b.length;
        this->width = b.width;
        return *this;

    }
};

int main() {
    Box box1;
    Box box2(10, 20, 30);
    Box box3(box2);
    box3 = box2;
    return 0;
}