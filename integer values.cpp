#include <iostream>

int main() {
    int num1, num2, num3;
    
    // Input the three numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    
    // Check if the numbers are equal using the equality operator
    if (num1 == num2 && num1 == num3) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not equal" << std::endl;
    }
    
    return 0;
}
