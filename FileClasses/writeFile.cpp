#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream myFile;
    // myFile.open("myFile.cpp"); 
    // use ios::ate to append to the file
    myFile.open("myFile.txt", ios::app);
    myFile << "Hello World";
    myFile.close();
    return 0;
}