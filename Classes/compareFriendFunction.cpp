#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    string name;
    Rectangle() {}
    Rectangle(int w, int h, string name) : width(w), height(h), name(name) {}
    int  area() const {
        return width * height;
    }
    friend Rectangle compare(const Rectangle&, const Rectangle&);
};

Rectangle compare(const Rectangle& param1, const Rectangle& param2) {
    const Rectangle& res = param1.area() > param2.area() ? param1 : param2;
    return res;
};

int main() {
    Rectangle rect(50, 50, "r1");
    Rectangle rect2(30, 40, "r2");
    rect2.area();
    Rectangle rect3 = compare(rect, rect2);
    cout << "Larger width: " << rect3.name << endl;

    return 0;
}