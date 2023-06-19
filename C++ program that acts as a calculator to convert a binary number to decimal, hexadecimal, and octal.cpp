#include <iostream>
#include <cmath>
#include <string>

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0;
    int power = 0;
    
    while (binaryNumber != 0) {
        int digit = binaryNumber % 10;
        decimalNumber += digit * pow(2, power);
        binaryNumber /= 10;
        power++;
    }
    
    return decimalNumber;
}

// Function to convert binary to hexadecimal
std::string binaryToHexadecimal(long long binaryNumber) {
    std::string hexadecimalNumber = "";
    int decimalNumber = binaryToDecimal(binaryNumber);
    const char hexDigits[] = "0123456789ABCDEF";
    
    while (decimalNumber != 0) {
        int digit = decimalNumber % 16;
        hexadecimalNumber = hexDigits[digit] + hexadecimalNumber;
        decimalNumber /= 16;
    }
    
    return hexadecimalNumber;
}

// Function to convert binary to octal
std::string binaryToOctal(long long binaryNumber) {
    std::string octalNumber = "";
    int decimalNumber = binaryToDecimal(binaryNumber);
    
    while (decimalNumber != 0) {
        int digit = decimalNumber % 8;
        octalNumber = std::to_string(digit) + octalNumber;
        decimalNumber /= 8;
    }
    
    return octalNumber;
}

int main() {
    long long binaryNumber;
    
    // Input the binary number
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;
    
    // Convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);
    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;
    
    // Convert binary to hexadecimal
    std::string hexadecimalNumber = binaryToHexadecimal(binaryNumber);
    std::cout << "Hexadecimal equivalent: " << hexadecimalNumber << std::endl;
    
    // Convert binary to octal
    std::string octalNumber = binaryToOctal(binaryNumber);
    std::cout << "Octal equivalent: " << octalNumber << std::endl;
    
    return 0;
}
