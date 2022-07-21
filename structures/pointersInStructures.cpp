#include <iostream>
using namespace std;

struct producer {
    string producerName;
};

struct movies_t {
    string title;
    int year;
    producer* producer;
};

int main() {

    producer twiy = { producerName:"The world is yours" };

    movies_t Godfather;
    Godfather.title = "The Godfather";
    Godfather.year = 1972;


    movies_t* Scarface = new movies_t;
    Scarface->title = "Scarface";
    Scarface->year = 1990;
    Scarface->producer = &twiy;

    // print
    cout << "Movie: " << Godfather.title << " Year: " << Godfather.year << endl;
    cout << "Movie: " << Scarface->title << " Year: " << Scarface->year << " Producer: " << Scarface->producer->producerName << endl;

    // with another expression
    cout << "----Movie: " << (*Scarface).title << " Year: " << (*Scarface).year << " Producer: " << (*(*Scarface).producer).producerName << endl;

    delete Scarface;

    return 0;
}