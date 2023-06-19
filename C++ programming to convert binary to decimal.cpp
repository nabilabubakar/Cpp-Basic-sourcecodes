#include <iostream>
#include <cmath>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0;
    int power = 0;
    
    // Convert binary to decimal
    while (binaryNumber != 0) {
        int digit = binaryNumber % 10;
        decimalNumber += digit * pow(2, power);
        binaryNumber /= 10;
        power++;
    }
    
    return decimalNumber;
}

int main() {
    long long binaryNumber;
    
    // Input the binary number
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;
    
    // Convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);
    
    // Display the decimal number
    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;
    
    return 0;
}
