#include <iostream>
using namespace std;

class Product {
private:
    int sales;
protected:
    int id;
    int stock;

public:
    string name;
    float price;

    Product(int i, string n, float p, int s) {
        id = i;
        name = n;
        stock = s;
        price = p;
        sales = 0;
    }

    // getter function
    int getId() {
        return id;
    }
    int getStock() {
        return stock;
    }
    int getSales() {
        return sales;
    }
    // setter function
    void setStock(int s) {
        stock = s;
    }
    void setSales(int s);
};

void Product::setSales(int s) {
    sales = s;
}

int main() {

    Product p = Product(1, "Chair", 12.99, 4);
    p.setSales(30);

    cout << "Id: " << p.getId() << endl;
    cout << "Sales: " << p.getSales() << endl;
    cout << "Stock before: " << p.getStock() << endl;
    p.setStock(10);
    cout << "Stock after: " << p.getStock() << endl;

    return 0;
}