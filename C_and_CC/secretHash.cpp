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


string stringToHex(string input)
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();

    string output;
    output.reserve(2 * len);
    for (size_t i = 0; i < len; ++i)
    {
        const unsigned char c = input[i];
        output.push_back(lut[c >> 4]);
        output.push_back(lut[c & 15]);
    }
    return output;

}
// Function to generate a random string of length n
string generateRandomString(int n)
{
    string AlphaNumeric = "0123456789"
                          "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "abcdefghijklmnopqrstuvwxyz";

    // String to hold the result
    string res;

    for (int i = 0; i < n; i++)
        res = res + AlphaNumeric[rand() % AlphaNumeric.size()];

    return res;
}

void combinepassword() {
    string password = "password";
    password.push_back('1');
    password.push_back('2');
    password.push_back('3');

    string hash = "hash";
    string hashpassword = password + hash;
    cout << hashpassword << endl;
}




int main(){
    string password;
    cout << "Enter a password: ";
    cin >> password;
    string generated_password = funpass(password);
    generated_password.push_back('!');
    generated_password.push_back('@');
    generated_password.push_back('A');
    generated_password.push_back('B');

    cout << "Your password is: " << generated_password << endl;

    // cout << "Your hashed password is: " << funpass(password) << endl;
    // combinepassword();
    // cout << "Your password is: " << password << endl;
    // cout << "Your random password is: " << generateRandomString(10) << endl;
    // cout << "Your random password in hex is: " << stringToHex(generateRandomString(1)) << endl;
    return 0;



}