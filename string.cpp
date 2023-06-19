#include <iostream>
#include <string>

int main() {
    std::string userInput;
    
    // Input the string
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    
    // Check if the string is equal to "hello" using the equality operator
    if (userInput == "hello") {
        std::cout << "Hello!" << std::endl;
    } else {
        std::cout << "Goodbye!" << std::endl;
    }
    
    return 0;
}