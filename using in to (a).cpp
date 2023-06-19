#include <iostream>
#include <string>

int main() {
    std::string userInput;
    
    // Input the string
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    
    // Check if the string contains the character 'a' using the in operator
    if (userInput.find('a') != std::string::npos) {
        std::cout << "Contains 'a'" << std::endl;
    } else {
        std::cout << "Does not contain 'a'" << std::endl;
    }
    
    return 0;
}