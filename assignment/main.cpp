#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    string publisher;
    int stockPosition;
    float price;

    void generateId() {
        int totalBooks = 0;
        ifstream file("books.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                totalBooks++;
            }
            file.close();
        }
        id = totalBooks + 1;
        cout << "totalBooks: " << totalBooks << endl;
    }

public:
    // default constructor
    Book() {
        title = "";
        author = "";
        publisher = "";
        stockPosition = 0;
        price = 0;

    }

    Book(string title, string author, string publisher, int stockPosition, float price, bool save) {
        this->title = title;
        this->author = author;
        this->publisher = publisher;
        this->stockPosition = stockPosition;
        this->price = price;
        if (save) {
            generateId();
            ofstream booksFile;
            booksFile.open("books.txt", ios::app);
            booksFile << id << "|" << title << "|" << author << "|" << publisher << "|" << stockPosition << "|" << price << endl;
            booksFile.close();
            cout << "[Info] New Book Saved with id " << id << endl;
        }
    }

    // getters
    int getId() {
        return id;
    }
    string getTitle() {
        return title;
    }
    string getAuthor() {
        return author;
    }
    string getPublisher() {
        return publisher;
    }
    int getStockPosition() {
        return stockPosition;
    }
    float getPrice() {
        return price;
    }
};

void insertBooksInFile() {
    Book books[10];
    books[0] = Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[1] = Book("Harry Potter and the Chamber of Secrets", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[2] = Book("Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[3] = Book("Harry Potter and the Goblet of Fire", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[4] = Book("Harry Potter and the Order of the Phoenix", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[5] = Book("Harry Potter and the Half-Blood Prince", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[6] = Book("Harry Potter and the Deathly Hallows", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[7] = Book("Harry Potter and the Chamber of Secrets", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[8] = Book("Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
    books[9] = Book("Harry Potter and the Goblet of Fire", "J.K. Rowling", "Bloomsbury", 1, 9.99, true);
}

Book getById(int _id) {
    ifstream booksFile;
    booksFile.open("books.txt");
    string line;
    while (getline(booksFile, line)) {
        stringstream ss(line);
        string id, title, author, publisher, stockPosition, price;
        getline(ss, id, '|');
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, publisher, '|');
        getline(ss, stockPosition, '|');
        getline(ss, price, '|');
        cout << "ID: " << stoi(id) << " Title: " << title << " Author: " << author << endl;
        if (_id == stoi(id)) {
            Book book(title, author, publisher, stoi(stockPosition), stof(price), false);
            return book;
        }
    }
}


int main() {

    insertBooksInFile();
    Book book = getById(1);
    cout << book.getTitle() << endl;

    return 0;
}