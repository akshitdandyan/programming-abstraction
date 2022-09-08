#include <iostream>
#include <string>
using namespace std;

int main() {
    // array of morse code

    string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        const int index = ch - 'a';
        string code = morse[index];
        cout << code << " ";
    }

    return 0;
}