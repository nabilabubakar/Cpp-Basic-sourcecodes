#include <iostream>

bool isPowerOfTwo(int number) {
    if (number <= 0)
        return false;
    
    // Check if number has only one bit set using the bitwise AND operator
    return ((number & (number - 1)) == 0);
}

int main() {
    int number;
    
    // Input the number
    std::cout << "Enter an integer number: ";
    std::cin >> number;
    
    // Check if the number is a power of 2 using the bitwise AND operator
    if (isPowerOfTwo(number)) {
        std::cout << "The number is a power of 2." << std::endl;
    } else {
        std::cout << "The number is not a power of 2." << std::endl;
    }
    
    return 0;
}
