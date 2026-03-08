#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, studentNo;
    int age;
    int currentYear = 2026;

    cout << "Enter your name           : ";
    getline(cin, name);
    cout << "Enter student number      : ";
    cin >> studentNo;
    cout << "Enter your age            : ";
    cin >> age;

    int birthYear = currentYear - age;
    int year100 = birthYear + 100;

    cout << "--------------------------------------" << endl;
    cout << "Summary" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Name          : " << name << endl;
    cout << "Student No    : " << studentNo << endl;
    cout << "Year of Birth : " << birthYear << endl;
    cout << "Year at Age 100: " << year100 << endl;

    return 0;
}