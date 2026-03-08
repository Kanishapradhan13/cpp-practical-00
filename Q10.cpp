#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    vector<float> marks;

public:
    Student(string n, int sn) : name(n), studentNumber(sn) {}

    void addMark(float m) {
        marks.push_back(m);
    }

    float getAverage() {
        return accumulate(marks.begin(), marks.end(), 0.0f) / marks.size();
    }

    float getHighest() {
        return *max_element(marks.begin(), marks.end());
    }

    float getLowest() {
        return *min_element(marks.begin(), marks.end());
    }

    void printReport() {
        float avg = getAverage();
        string classification;
        if (avg >= 75) classification = "Distinction";
        else if (avg >= 60) classification = "Merit";
        else if (avg >= 40) classification = "Pass";
        else classification = "Fail";

        cout << "=====================================================" << endl;
        cout << "  ACADEMIC REPORT" << endl;
        cout << "=====================================================" << endl;
        cout << "Student Name  : " << name << endl;
        cout << "Student No    : " << studentNumber << endl;
        cout << "Marks Entered : " << marks.size() << endl;
        cout << "Marks         : ";
        for (float m : marks) cout << m << "  ";
        cout << endl;
        cout << "Average       : " << fixed << setprecision(2) << avg << endl;
        cout << "Highest       : " << getHighest() << endl;
        cout << "Lowest        : " << getLowest() << endl;
        cout << "Classification: " << classification << endl;
        cout << "=====================================================" << endl;
    }
};

int main() {
    Student s("Kanisha Pradhan", 20240283);
    s.addMark(88);
    s.addMark(76);
    s.addMark(95);
    s.addMark(65);
    s.addMark(80);
    s.printReport();
    return 0;
}