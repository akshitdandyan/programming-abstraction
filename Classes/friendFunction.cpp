#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle() {}
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() { return width * height; }
    friend Rectangle duplicate(const Rectangle&);
};

Rectangle duplicate(const Rectangle& param) {
    Rectangle res;
    res.width = param.width * 2;
    res.height = param.height * 2;
    return res;
}

int main() {
    Rectangle rect(10, 20);
    Rectangle rect2 = duplicate(rect);
    cout << rect2.area() << endl;

    return 0;
}