#include <iostream>
using namespace std;

class School {
private:
    int totalRevenue;
protected:
    int totalStudent;

public:
    School() {
        totalRevenue = 5000;
        totalStudent = 980;
    }
};

class Inspection : public School {
public:
    int getTotalStudents() {
        return totalStudent;
    }
};

int main() {
    School s;
    Inspection i;
    cout << i.getTotalStudents();
    return 0;
}