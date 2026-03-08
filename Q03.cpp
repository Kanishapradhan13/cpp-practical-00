#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

int main() {
    string fullName = "Tenzin Wangchuk";
    
    cout << "Full Name: " << fullName << endl;
    cout << "Total length: " << fullName.length() << endl;
    
    string uppercase = fullName;
    for (char &c : uppercase) {
        c = toupper(c);
    }
    cout << "Uppercase: " << uppercase << endl;
    
    string lowercase = fullName;
    for (char &c : lowercase) {
        c = tolower(c);
    }
    cout << "Lowercase: " << lowercase << endl;
    
    string initials = "";
    initials += toupper(fullName[0]);
    for (size_t i = 1; i < fullName.length(); i++) {
        if (fullName[i - 1] == ' ') {
            initials += toupper(fullName[i]);
        }
    }
    cout << "Initials: " << initials << endl;
    
    // Display length of first name only
    size_t spacePos = fullName.find(' ');
    string firstName = fullName.substr(0, spacePos);
    cout << "Length of first name: " << firstName.length() << endl;
    
    return 0;
}