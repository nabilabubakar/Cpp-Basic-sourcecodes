#include <iostream>

int main() {
    int num1, num2;
    
    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Calculate and display the sum
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;
    
    // Calculate and display the difference
    int difference = num1 - num2;
    std::cout << "Difference: " << difference << std::endl;
    
    // Calculate and display the product
    int product = num1 * num2;
    std::cout << "Product: " << product << std::endl;
    
    // Calculate and display the quotient
    // Note: We assume the second number is not zero for simplicity
    int quotient = num1 / num2;
    std::cout << "Quotient: " << quotient << std::endl;
    
    return 0;
}