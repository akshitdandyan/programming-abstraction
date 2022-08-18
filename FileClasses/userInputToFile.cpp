#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string username;
    cout << "Enter your username: ";
    cin >> username;
    ofstream myFile("usernames.txt", ios::app);

    myFile << username << endl;
    myFile.close();

    ifstream myFile2("usernames.txt");
    if (myFile2.is_open()) {
        while (getline(myFile2, username)) {
            cout << username << endl;
        }
        myFile2.close();
    }
    else {
        cout << "File not exists";
    }



    return 0;
}