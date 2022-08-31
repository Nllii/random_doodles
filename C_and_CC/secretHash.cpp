#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

using namespace std;

// create a hash function with special characters, upper and lower case letters, and numbers
string funpass(string password) {
    string getPassword = "";
    for (int i = 0; i < password.length(); i++) {
        switch (password[i]) {
            case 'a':
                getPassword += "4";
                break;
            case 'e':
                getPassword += "3";
                break;
            case 'i':
                getPassword += "1";
                break;
            case 'o':
                getPassword += "0";
                break;
            case 's':
                getPassword += "5";
                break;
            case 'A':
                getPassword += "4";
                break;
            case 'E':
                getPassword += "3";
                break;
            case 'I':
                getPassword += "1";
                break;
            case 'O':
                getPassword += "0";
                break;
            case 'S':
                getPassword += "5";
                break;
            case '0':
                getPassword += "o";
                break;
            case '1':
                getPassword += "i";
                break;
            case '3':
                getPassword += "e";
                break;
            case '4':
                getPassword += "a";
                break;
            case '5':
                getPassword += "s";
                break;
            default:
                getPassword += password[i];
                break;
        }
    }
    return getPassword;
}



int main(int argc, char *argv[]) {
    // ask user for password
    string password;
    cout << "Enter a password: ";
    cin >> password;

    // string password = "LOVERAasdLERD";
    string getPassword = funpass(password);
    cout << "Password: " << getPassword << endl;
    cout << "Hash: " << getPassword << endl;
    return 0;
}
