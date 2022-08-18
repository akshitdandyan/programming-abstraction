#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book {
public:
    int id;
    Book() {}
    Book(int id) :id(id) {}

};

int main() {
    Book b(7);
    ofstream myFile;
    myFile.open("books.txt", ios::app);
    myFile.write((char*)&b, sizeof(b));

    myFile.close();

    Book b1;
    ifstream in;
    in.open("books.txt");
    in.read((char*)&b1, sizeof(b1));
    cout << b1.id << endl;
    in.close();
    return 0;
}