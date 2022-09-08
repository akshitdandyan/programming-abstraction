#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1("hello");
    cout << s1 << endl;
    cout << s1.length() << endl;

    string s2(4, 'a');
    cout << s2 << endl;
    cout << s2.length() << endl;

    string s3(s1, 2);
    cout << s3 << endl;
    cout << s3.length() << endl;

    string s4 = s1 + s3;
    cout << s4 << endl;
    cout << s4.length() << endl;

    // s4.erase(2, 3);
    int u = s4.find("llo");
    cout << "llo found at " << u << endl;

    string s5;
    cin.ignore();
    getline(cin, s5);
    cout << s5 << endl;

    s5.append(" Appended text");
    cout << "s5 after append: " << s5 << endl;



    return 0;
}