#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char s1[] = "Hello";
    char s2[] = " World";
    strcat(s1, s2);
    cout << s1 << endl;


    cout << "Length of s1 after concatenation is " << strlen(s1) << endl;

    char s3[20];
    strcpy(s3, s1);

    cout << "s3 is " << s3 << endl;

    char s4[20];
    strcpy(s4, s1);

    if (strcmp(s3, s4) == 0) {
        cout << "s3 and s4 are equal" << endl;
    }
    else {
        cout << "s3 and s4 are not equal" << endl;
    }


    return 0;
}