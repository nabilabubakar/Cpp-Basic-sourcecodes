#include <iostream>

int main() {
    int number;
    
    // Input the number
    std::cout << "Enter an integer number: ";
    std::cin >> number;
    
    // Check if the number is odd using the modulus operator
    if (number % 2 != 0) {
        std::cout << "Odd number" << std::endl;
    } else {
        std::cout << "Even number" << std::endl;
    }
    
    return 0;
}