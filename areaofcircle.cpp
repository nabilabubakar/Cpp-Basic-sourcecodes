#include <iostream>
#include <cmath>

int main() {
    double radius;
    
    // Input the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    
    // Calculate the area using the formula: pi * r^2
    double area = M_PI * pow(radius, 2);
    
    // Display the calculated area
    std::cout << "The area of the circle is: " << area << std::endl;
    
    return 0;
}