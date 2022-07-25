#include <iostream>
using namespace std;

class Book {
public:
    string title;
    Book(string t) {
        title = t;
    }
};

int main() {

    Book b = Book("C++");
    Book* bptr = &b;
    cout << bptr->title;
    cout << b.title;
    cout << (*bptr).title;


    return 0;
}