#include <iostream>
using namespace std;

class Batsman {
private:
    string name;
    int innings;
    int notOuts;
    int runs;
public:
    Batsman() {};
    Batsman(string name, int innings, int notOuts, int runs) {
        this->name = name;
        this->innings = innings;
        this->notOuts = notOuts;
        this->runs = runs;
    }

    float average() {
        return (float)runs / (innings - notOuts);
    }

    void setData(string name, int innings, int notOuts, int runs) {
        this->name = name;
        this->innings = innings;
        this->notOuts = notOuts;
        this->runs = runs;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Innings: " << innings << endl;
        cout << "Not Outs: " << notOuts << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << average() << endl;
        cout << "---------------------" << endl;
    }
};


int main() {

    Batsman Team[11];

    for (int i = 0; i < 11; i++) {
        string name;
        int innings;
        int notOuts;
        int runs;
        cin >> name >> innings >> notOuts >> runs;
        Team[i].setData(name, innings, notOuts, runs);
        Team[i].display();
    }


    return 0;
}