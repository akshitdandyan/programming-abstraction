#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    Polygon(int a, int b) : width(a), height(b) {}
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual int area() = 0;
    // can call the function with appropriate reference
    void print_area() {
        cout << "Area is " << this->area() << endl;
    }
};

class Rectangle : public Polygon {
public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    int area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    Triangle(int a, int b) : Polygon(a, b) {}
    int area() {
        return width * height / 2;
    }
};

int main() {

    Polygon* rect = new Rectangle(4, 5); // concept of aggregation
    Polygon* trgl = new Triangle(4, 5); // concept of aggregation
    rect->print_area();
    trgl->print_area();

    delete rect;
    delete trgl;

    return 0;
}