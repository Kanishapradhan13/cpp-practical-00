#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Kanisha";
    string fullName = "Kanisha Pradhan";
    string studentNo = "20240283";

    int n = firstName.length();
    cout << "Name repeated (" << n << " times):" << endl;
    for (int i = 0; i < n; i++) {
        cout << firstName << endl;
    }

    cout << endl;
    int height = fullName.length();
    cout << "Triangle (height = " << height << "):" << endl;
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    int lastDigit = studentNo[studentNo.length() - 1] - '0';
    cout << "Times Table for " << lastDigit << " (last digit of " << studentNo << "):" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << lastDigit << " x " << i << " = " << lastDigit * i << endl;
    }

    return 0;
}