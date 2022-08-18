#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual int area() = 0;
};

class Rectangle : public Polygon {
public:
    int area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int area() {
        return width * height / 2;
    }
};

int main() {

    Rectangle rect; // concept of aggregation
    Triangle trgl; // concept of aggregation
    Polygon* poly1 = &rect; // Base class Polygorn pointer and reference to rectangle
    Polygon* poly2 = &trgl; // Base class Polygorn pointer and reference to triangle
    poly1->set_values(10, 20); // Inherited from polygon to rectangle
    poly2->set_values(10, 20); // Inherited from polygon to triangle
    cout << "Area of Rectangle is " << poly1->area() << endl; // dynamically call based on the virtual function call rect
    cout << "Area of Triangle is " << poly2->area() << endl; // dynamically call based on the virtual function call trgl


    return 0;
}