#include <iostream>

int main() {
    int number;
    
    // Input the number
    std::cout << "Enter an integer number: ";
    std::cin >> number;
    
    // Check if the number is both odd and divisible by 3 using the logical AND operator
    if (number % 2 != 0 && number % 3 == 0) {
        std::cout << "The number is both odd and divisible by 3." << std::endl;
    } else {
        std::cout << "The number is either not odd or not divisible by 3." << std::endl;
    }
    
    return 0;
}