#include <iostream>
using namespace std;

struct Book {
    string author;
    string title;
    float price;
    string publisher;
    int stock;
};


int main() {

    Book books[10];
    // add 10 books randomly
    for (int i = 0; i < 10; i++) {
        books[i].author = "Author" + to_string(i);
        books[i].title = "Title" + to_string(i);
        books[i].price = i;
        books[i].publisher = "Publisher" + to_string(i);
        books[i].stock = i;
    }
    // print books
    cout << "Inventory" << endl << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Book " << i << ": " << books[i].author << " " << books[i].title << " " << books[i].price << " " << books[i].publisher << " " << books[i].stock << endl;
    }

    string author;
    string title;
    cout << "Enter author" << endl;
    cin >> author;
    cout << "Enter title" << endl;
    cin >> title;

    cout << author << " " << title << endl;

    // search for book
    for (int i = 0; i < 10; i++) {
        // cout << "book[i].author " << books[i].author << " books[i].title " << books[i].title << endl;
        if (books[i].author == author && books[i].title == title) {
            cout << "Book found" << endl;
            cout << "Book: " << i << ": " << books[i].author << " " << books[i].title << " " << books[i].price << " " << books[i].publisher << " " << books[i].stock << endl;
            int requiredCopies;
            cout << "How many copied are required?";
            cin >> requiredCopies;
            if (requiredCopies > books[i].stock) {
                cout << "Not enough stock" << endl;
                return 0;
            }
            cout << "Total cost: " << books[i].price * requiredCopies;
            return 0;
        }
    }

    cout << "Book not found :(";

    return 0;
}