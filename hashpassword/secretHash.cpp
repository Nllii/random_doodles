#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>


void secretHash() {
    std::string password;
    std::cout << "Enter password: ";
    std::cin >> password;
    std::cout << std::endl;
    for (int i = 0; i < password.length(); i++) {
        password[i] = std::toupper(password[i]);
    }
    std::cout << "Password: " << password << std::endl;
    std::cout << "Hash: ";
    for (int i = 0; i < password.length(); i++) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)password[i];
    }
    std::cout << std::endl;
}



int main(){
    std::cout << "Secret Hash" << std::endl;
    std::cout << "-----------" << std::endl;
    secretHash();
    return 0;

}