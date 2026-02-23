#include <iostream>

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function for division
double divide(int a, int b) {
    if (b != 0)
        return static_cast<double>(a) / b;
    else {
        std::cerr << "Error: Division by zero.";
        return 0;
    }
}

// Main function to test the calculator
int main() {
    int x = 10, y = 5;
    std::cout << "Addition: " << add(x, y) << std::endl;
    std::cout << "Subtraction: " << subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << multiply(x, y) << std::endl;
    std::cout << "Division: " << divide(x, y) << std::endl;
    return 0;
}