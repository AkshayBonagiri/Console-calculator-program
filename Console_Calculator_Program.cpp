#include <iostream>
using namespace std;

int main() {
    double num1;      // To store the first number
    double num2;      // To store the second number
    char operation;   // To store the operation (+, -, *, /)

    // Display calculator title
    std::cout << "***************CALCULATOR***************" << "\n";
    
    // Ask user to enter the operation they want to perform
    std::cout << "Enter which operation you want to perform either (+ - * /): ";
    std::cin >> operation;

    // Check if entered operation is valid
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        std::cout << "Invalid operation! Please enter one of (+ - * /)\n";
        return 0;  // Exit the program if invalid operation is entered
    }

    // Take input for both numbers
    std::cout << "Enter a Number: ";
    std::cin >> num1;
    
    std::cout << "Enter a Number: ";
    std::cin >> num2;

    // *****************************
    // Using SWITCH-CASE to perform operations based on the input
    switch (operation) {
        case '+':  // If user entered '+'
            std::cout << "SUM: " << num1 + num2 << "\n";
            break;

        case '-':  // If user entered '-'
            std::cout << "SUBTRACTION: " << num1 - num2 << "\n";
            break;

        case '*':  // If user entered '*'
            std::cout << "PRODUCT: " << num1 * num2 << "\n";
            break;

        case '/':  // If user entered '/'
            std::cout << "DIVISION: " << num1 / num2 << "\n";
            break;
    }

    // End message
    std::cout << "****************************************";

    return 0;
}
