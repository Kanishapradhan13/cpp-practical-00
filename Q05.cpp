#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Tenzin Wangchuk";
    string studentNo = "20240101";
    int mark;

    cout << "Enter mark: ";
    cin >> mark;

    if (mark < 0 || mark > 100) {
        cout << "Error: Mark must be between 0 and 100." << endl;
        return 1;
    }

    string grade, result;

    if (mark >= 75) {
        grade = "Distinction";
        result = "Congratulations, Tenzin! You have passed.";
    } else if (mark >= 60) {
        grade = "Merit";
        result = "Congratulations, Tenzin! You have passed.";
    } else if (mark >= 40) {
        grade = "Pass";
        result = "Congratulations, Tenzin! You have passed.";
    } else {
        grade = "Fail";
        result = "Sorry, Tenzin. You have failed.";
    }

    cout << "----------------------------------------" << endl;
    cout << "Student : " << name << " (" << studentNo << ")" << endl;
    cout << "Mark    : " << mark << endl;
    cout << "Grade   : " << grade << endl;
    cout << "Result  : " << result << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}