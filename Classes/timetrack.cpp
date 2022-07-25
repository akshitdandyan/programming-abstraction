#include <iostream>
using namespace std;

class Team {
    int hours, minutes;
public:
    string name;
    Team() {}
    Team(int h, int m, string name) : hours(h), minutes(m), name(name) {}
    friend void totalTime(const Team&, const Team&);
};

void totalTime(const Team& param1, const Team& param2) {
    int totalHours = param1.hours + param2.hours;
    int totalMinutes = param1.minutes + param2.minutes;
    if (totalMinutes >= 60) {
        totalHours += totalMinutes / 60;
        totalMinutes %= 60;
    }
    cout << "Total time: " << totalHours << " hours " << totalMinutes << " minutes" << endl;
}

int main() {

    Team team1(1, 30, "team1");
    Team team2(2, 40, "team2");
    totalTime(team1, team2);


    return 0;
}