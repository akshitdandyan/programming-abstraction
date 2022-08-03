#include <iostream>
using namespace std;

class Game {
protected:
    string name;
public:
    Game() {}
    Game(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

};

class Player : public Game {
    string name;
    int matchCount;
    int wins;
    int lost;
    Game game;
public:
    Player() {
        cout << "Player default constructor" << endl;
    }
    Player(string name, int matchCount, int wins, int losts, string gameName) : game(gameName) {
        cout << "Player constructor" << endl;
        this->name = name;
        this->matchCount = matchCount;
        this->wins = wins;
        this->lost = losts;
        this->game = game;
    }

    void display() {
        cout << "Player Data:" << endl;
        cout << "Name: " << name << " Matches: " << matchCount << " Wins: " << wins << " Losts: " << lost << " Game:" << game.getName() << endl;
    }

};


int main() {

    return 0;
}