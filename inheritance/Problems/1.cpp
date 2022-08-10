#include <iostream>
using namespace std;

class Performance {
public:
    int punctuality;
    float taskCompletionRate;
    int onTimeSubmissionRate;
    int totalGrades;
    float calculateTotal() {
        return (punctuality + taskCompletionRate + onTimeSubmissionRate + totalGrades) / 4;
    }
};

class Employee :public Performance {
    int number;
    string name;
    int experience;

public:
    Employee() {}

    Employee(int number, string name, int experience, int punctuality,
        float taskCompletionRate,
        int onTimeSubmissionRate,
        int totalGrades) {
        this->number = number;
        this->name = name;
        this->experience = experience;
        this->punctuality = punctuality;
        this->taskCompletionRate = taskCompletionRate;
        this->onTimeSubmissionRate = onTimeSubmissionRate;
        this->totalGrades = totalGrades;
    }


    void takeData() {
        cout << "Enter number: ";
        cin >> number;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter experience: ";
        cin >> experience;
        cout << "Enter punctuality: ";
        cin >> punctuality;
        cout << "Enter task completion rate: ";
        cin >> taskCompletionRate;
        cout << "Enter on time submission rate: ";
        cin >> onTimeSubmissionRate;
        cout << "Enter total grades: ";
        cin >> totalGrades;
    }

    void showData() {
        cout << "-----------------------------------------------------" << endl;
        cout << "Number: " << number << endl;
        cout << "Name: " << name << endl;
        cout << "Experience: " << experience << endl;
        cout << "Punctuality: " << punctuality << endl;
        cout << "Task Completion Rate: " << taskCompletionRate << endl;
        cout << "On Time Submission Rate: " << onTimeSubmissionRate << endl;
        cout << "Total Grades: " << totalGrades << endl;
        cout << "Total Percentage: " << this->calculateTotal() << endl;
    }



};

int main() {

    Employee e1;
    Employee e2;
    Employee e3;

    Employee employees[3] = { e1, e2, e3 };

    for (int i = 0; i < 2; i++) {
        employees[i].takeData();
    }

    for (int i = 0; i < 2; i++) {
        employees[i].showData();
    }

    return 0;
}

