#include <iostream>
#include <cctype>

int main() {
    char userInput;
    
    // Input the character
    std::cout << "Enter a character: ";
    std::cin >> userInput;
    
    // Check if the character is an uppercase letter using the logical AND operator and the isupper() function
    if (std::isupper(userInput)) {
        std::cout << "Uppercase letter" << std::endl;
    } else {
        std::cout << "Not an uppercase letter" << std::endl;
    }
    
    return 0;
}