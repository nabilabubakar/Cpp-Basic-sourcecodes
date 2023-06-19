#include <iostream>

int main() {
    int num1, num2;
    
    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Check if the first value is greater than the second using the greater than operator
    if (num1 > num2) {
        std::cout << "First value is greater" << std::endl;
    } else {
        std::cout << "Second value is greater" << std::endl;
    }
    
    return 0;
}