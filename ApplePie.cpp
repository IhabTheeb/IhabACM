#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    std::string possible_characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string password = "";

    std::srand(std::time(0)); // use current time as seed for random generator
    for(int i = 0; i < length; i++) {
        int randomIndex = std::rand() % possible_characters.size();
        password += possible_characters[randomIndex];
    }

    return password;
}

int main()
{
    int passwordLength;
    std::cout << "Enter the length of the password: ";
    std::cin >> passwordLength;

    std::string password = generatePassword(passwordLength);
    std::cout << "Your password is: " << password << std::endl;
    return 0;
}