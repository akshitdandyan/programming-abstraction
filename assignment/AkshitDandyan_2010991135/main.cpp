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

class Inventory {
public:
    Inventory() {}
    void insertBooksInFile();
    Book getById(int id);
    void decreaseStockPositions(int _id, int _stockPosition);
    void showAllBooks();
    int getTotalBooks();
};

void Inventory::insertBooksInFile() {
    Book books[10];
    books[0] = Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", "Bloomsbury", 4, 9.99, true);
    books[1] = Book("Harry Potter and the Chamber of Secrets", "J.K. Rowling", "Bloomsbury", 14, 7.99, true);
    books[2] = Book("Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", "Bloomsbury", 17, 8.99, true);
    books[3] = Book("Harry Potter and the Goblet of Fire", "J.K. Rowling", "Bloomsbury", 21, 12.99, true);
    books[4] = Book("Harry Potter and the Order of the Phoenix", "J.K. Rowling", "Bloomsbury", 10, 10.99, true);
    books[5] = Book("Harry Potter and the Half-Blood Prince", "J.K. Rowling", "Bloomsbury", 5, 9.99, true);
    books[6] = Book("Harry Potter and the Deathly Hallows", "J.K. Rowling", "Bloomsbury", 9, 6.99, true);
    books[7] = Book("Harry Potter and the Chamber of Secrets", "J.K. Rowling", "Bloomsbury", 6, 15.99, true);
    books[8] = Book("Harry Potter and the Prisoner of Azkaban (Summary edition)", "J.K. Rowling", "Bloomsbury", 18, 14.99, true);
    books[9] = Book("Harry Potter and the Goblet of Fire (Summary Edition)", "J.K. Rowling", "Bloomsbury", 15, 8.99, true);
}

int Inventory::getTotalBooks() {
    int totalBooks = 0;
    ifstream file("books.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            totalBooks++;
        }
        file.close();
    }
    return totalBooks;
}

Book Inventory::getById(int _id) {
    ifstream booksFile;
    booksFile.open("books.txt");
    if (!booksFile.is_open()) {
        throw runtime_error("[Error] Books data not found, try running insertBooksInFile() first.");
    }
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
        if (_id == stoi(id)) {
            Book book(title, author, publisher, stoi(stockPosition), stof(price), false);
            return book;
        }
    }
}

void Inventory::decreaseStockPositions(int _id, int _stockPosition) {
    Book book = getById(_id);
    int newStockPosition = book.getStockPosition() - _stockPosition;
    if (newStockPosition < 0) {
        throw runtime_error("[Error] Not enough stock to sell.");
    }
    ifstream readFile;
    ofstream writeFile;
    readFile.open("books.txt");
    writeFile.open("updatedBooks.txt", ios::trunc);
    if (!readFile.is_open()) {
        throw runtime_error("[Error] Books data not found, try running insertBooksInFile() first.");
    }
    int totalBooks = getTotalBooks();
    string line;
    while (getline(readFile, line) && totalBooks > 0) {
        stringstream ss(line);
        string id, title, author, publisher, stockPosition, price;
        getline(ss, id, '|');
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, publisher, '|');
        getline(ss, stockPosition, '|');
        getline(ss, price, '|');
        if (_id == stoi(id)) {
            writeFile << id << "|" << title << "|" << author << "|" << publisher << "|" << newStockPosition << "|" << price << endl;
        }
        else {
            writeFile << line << endl;
        }
        totalBooks--;
    }
    // copy updated file to original file
    readFile.close();
    writeFile.close();
    remove("books.txt");
    rename("updatedBooks.txt", "books.txt");
}

void Inventory::showAllBooks() {
    ifstream booksFile;
    booksFile.open("books.txt");
    // checkif file is open
    if (!booksFile.is_open()) {
        throw runtime_error("[Error] Books data not found, try running insertBooksInFile() first.");
    }
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
        cout << "ID: " << stoi(id) << " Title: " << title << " Author: " << author << " Price: " << price << " Stocks: " << stockPosition << endl;
    }
}

void runSoftware() {
    Inventory inventory;
    int key = 0;
    cout << "Welcome to the Book Store" << endl;
    while (key != 3) {
        cout << "-------------------------------------------" << endl;
        cout << "Press 1 to show all books" << endl;
        cout << "Press 2 to buy a book" << endl;
        cout << "Press 3 to exit" << endl;
        cin >> key;
        if (key == 1) {
            inventory.showAllBooks();
        }
        else if (key == 2) {
            int id;
            cout << "Enter the id of the book you want to buy" << endl;
            cin >> id;
            Book book = inventory.getById(id);
            if (book.getStockPosition() > 0) {
                cout << "Enter the copies you want to buy:" << endl;
                int copies;
                cin >> copies;
                if (copies <= book.getStockPosition()) {
                    cout << "You have ordered " << copies << " copies of " << book.getTitle() << endl;
                    cout << "The total price is " << copies * book.getPrice() << endl;
                    inventory.decreaseStockPositions(id, copies);
                }
                else {
                    cout << "There are not enough copies in stock" << endl;
                }
            }
            else {
                cout << "Sorry, there are no more copies of this book in our stock" << endl;
            }
        }
        else if (key == 3) {
            cout << "Have a good day!" << endl;
        }
        else {
            cout << "Invalid option" << endl;
        }

    }
}


int main() {
    // -------------------------------------------
    // Readme:
    // Concepts used:
    // - Polymorphism
    // - Exception handling
    // - File I/O
    // - OOP
    // - Encapsulation
    // - Data abstraction
    // --------------------------------------------
    // Information:
    // if books.txt file does not exist, create it by uncommenting the following two lines

    // Inventory inventory;
    // inventory.insertBooksInFile();

    try {
        // runSoftware();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }




    return 0;
}