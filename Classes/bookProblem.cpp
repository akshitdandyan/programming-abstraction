#include <iostream>
using namespace std;


class Book {
private:
    int stock;
public:
    string author;
    string title;
    string publisher;
    float price;

    Book() {}

    Book(int stck, string auth, string ttl, string pub, float pr) {
        stock = stck;
        author = auth;
        title = ttl;
        publisher = pub;
        price = pr;
    }

    void printBook() {
        cout << endl << "Book Details----------------------" << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
        cout << "Stock: " << stock << endl;
        cout << endl << "----------------------------------" << endl;
    }

    int getStock() {
        return stock;
    }

    void decreaseStock(int n) {
        if (stock >= n) {
            stock -= n;
            cout << "Book sold, stock left: " << stock << endl;

        }
        else {
            cout << "Not enough stock" << endl;
        }
    }

};

class Sale {
public:

    Sale() {}

    int bookAvailable(Book books[], string title, string author) {
        for (int i = 0; i < 10; i++) {
            if (books[i].title == title && books[i].author == author) {
                if (books[i].getStock() > 0) {
                    return i;
                }
                else {
                    return -1;
                }
            }
        }
        return -1;
    }

    void sellBook(Book books[], string title, string author, int totalCopies) {
        int index = bookAvailable(books, title, author);
        if (index == -1) {
            cout << "Book not available" << endl;
        }
        else {
            books[index].decreaseStock(totalCopies);
        }
    }

};

int main() {

    Book books[10];
    books[0] = Book(10, "Author1", "Title1", "Publisher1", 10.0);
    books[1] = Book(20, "Author2", "Title2", "Publisher2", 20.0);
    books[2] = Book(30, "Author3", "Title3", "Publisher3", 30.0);
    books[3] = Book(40, "Author4", "Title4", "Publisher4", 40.0);
    books[4] = Book(50, "Author5", "Title5", "Publisher5", 50.0);
    books[5] = Book(60, "Author6", "Title6", "Publisher6", 60.0);
    books[6] = Book(70, "Author7", "Title7", "Publisher7", 70.0);
    books[7] = Book(80, "Author8", "Title8", "Publisher8", 80.0);
    books[8] = Book(90, "Author9", "Title9", "Publisher9", 90.0);
    books[9] = Book(100, "Author10", "Title10", "Publisher10", 100.0);


    Sale s = Sale();
    string title, author;
    int copiedRequired;
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter author: ";
    cin >> author;
    int bookAvailableIndex = s.bookAvailable(books, title, author);
    if (bookAvailableIndex >= 0) {
        cout << "Book available" << endl;
        cout << "Enter number of copies: ";
        cin >> copiedRequired;
        if (copiedRequired <= books[bookAvailableIndex].getStock()) {
            books[bookAvailableIndex].printBook();
            cout << "Total Cost: " << copiedRequired * books[bookAvailableIndex].price << endl;
            books[bookAvailableIndex].decreaseStock(copiedRequired);
        }
        else {
            cout << "Not enough copies" << endl;
        }
    }
    else {
        cout << "Book not available" << endl;
    }
    return 0;
}