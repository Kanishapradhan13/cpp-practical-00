#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name = "Kanisha Pradhan";
    string studentNo = "20240283";
    int Kanisha_marks[5] = {86, 72, 66, 13, 90};

    cout << "Student: " << name << " | No: " << studentNo << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Index  Mark  Bar" << endl;

    int highest = Kanisha_marks[0], lowest = Kanisha_marks[0], sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "[" << i << "]    " << Kanisha_marks[i] << "    ";
        for (int j = 0; j < Kanisha_marks[i] / 10; j++) cout << "*";
        cout << endl;
        if (Kanisha_marks[i] > highest) highest = Kanisha_marks[i];
        if (Kanisha_marks[i] < lowest) lowest = Kanisha_marks[i];
        sum += Kanisha_marks[i];
    }

    double average = (double)sum / 5;
    int aboveAvg = 0;
    for (int i = 0; i < 5; i++) if (Kanisha_marks[i] > average) aboveAvg++;

    cout << "--------------------------------------------" << endl;
    cout << "Highest : " << highest << endl;
    cout << "Lowest  : " << lowest << endl;
    cout << "Average : " << fixed << setprecision(2) << average << endl;
    cout << "Above Average: " << aboveAvg << " mark(s)" << endl;

    return 0;
}