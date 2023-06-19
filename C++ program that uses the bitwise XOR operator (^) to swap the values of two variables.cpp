#include <iostream>

int main() {
    int a, b;
    
    // Input the values
    std::cout << "Enter the value of variable a: ";
    std::cin >> a;
    
    std::cout << "Enter the value of variable b: ";
    std::cin >> b;
    
    // Display the original values
    std::cout << "Original values: a = " << a << ", b = " << b << std::endl;
    
    // Swap the values using bitwise XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    // Display the swapped values
    std::cout << "Swapped values: a = " << a << ", b = " << b << std::endl;
    
    return 0;
}
