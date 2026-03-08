#include <iostream>

using namespace std;

int main() {

    int studentNumber = 2230283;

    int temp = studentNumber;
    int digitSum = 0;

    while (temp != 0) {
        digitSum = digitSum + (temp % 10);
        temp = temp / 10;
    }

    if (studentNumber % 2 == 0) {
        cout << "Student Number : " << studentNumber << endl;
        cout << "Digit Sum      : " << digitSum << endl;
        cout << "Odd / Even     : Even" << endl;
    } else {
        cout << "Student Number : " << studentNumber << endl;
        cout << "Digit Sum      : " << digitSum << endl;
        cout << "Odd / Even     : Odd" << endl;
    }

    cout << "Remainder (% 7) : " << studentNumber % 7 << endl;

    cout << "Multiplied by 3 : " << studentNumber * 3 << endl;

    return 0;
}