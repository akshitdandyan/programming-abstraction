#include <iostream>
using namespace std;

struct Date {
    int month;
    int date;
    int year;
};

struct Person {
    string name;
    Date birthDate;
    int age;
};
int main() {

    int n;
    cout << "Enter number of persons: ";
    cin >> n;

    Person persons[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> persons[i].name;
        cout << "Enter birth date: ";
        cin >> persons[i].birthDate.month >> persons[i].birthDate.date >> persons[i].birthDate.year;
        persons[i].age = 2022 - persons[i].birthDate.year;
    }
    for (int i = 0; i < n; i++) {
        cout << "Person " << i << ": " << persons[i].name << " " << persons[i].age << endl;
    }
    //find person with min age
    int minAge = persons[0].age;
    int minAgeIndex = 0;
    for (int i = 1; i < n; i++) {
        if (persons[i].age < minAge) {
            minAge = persons[i].age;
            minAgeIndex = i;
        }
    }
    // find person with max age
    int maxAge = persons[0].age;
    int maxAgeIndex = 0;
    for (int i = 1; i < n; i++) {
        if (persons[i].age > maxAge) {
            maxAge = persons[i].age;
            maxAgeIndex = i;
        }
    }

    cout << "Youngest: " << persons[minAgeIndex].name << endl;
    cout << "Elder: " << persons[maxAgeIndex].name << endl;


    return 0;
}