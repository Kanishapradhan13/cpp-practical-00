#include <iostream>
#include <string>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int countVowels(string s) {
    int count = 0;
    for (char c : s)
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    return count;
}

string reverseString(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    return rev;
}

int main() {
    string name = "Kanisha Pradhan";
    int studentNo = 20240283;

    cout << "========================================" << endl;
    cout << "  Function Results for " << name << endl;
    cout << "  Student No: " << studentNo << endl;
    cout << "========================================" << endl;
    cout << "digitSum(" << studentNo << ")          : " << digitSum(studentNo) << endl;
    cout << "isPrime(" << studentNo << ")           : " << (isPrime(studentNo) ? "Yes" : "No") << endl;
    cout << "countVowels(" << name << ") : " << countVowels(name) << endl;
    cout << "reverseString(" << name << "): " << reverseString(name) << endl;
    cout << "========================================" << endl;

    return 0;
}