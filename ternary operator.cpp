#include <iostream>

int main() {
    int num1, num2;
    
    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Use the ternary operator to determine the larger number
    int largerNumber = (num1 > num2) ? num1 : num2;
    
    // Display the larger number
    std::cout << "The larger number is: " << largerNumber << std::endl;
    
    return 0;
}