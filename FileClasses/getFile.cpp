#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string line;
    ifstream myFile("file2.text");
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    else {
        cout << "Unable to open file";
    }

    return 0;
}