#include <iostream>


int main() {

    char op;
    double num1; 
    double num2;
    double results;

    std::cout << "********** CALCULATOR **********\n";

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;


    switch (op)
    {
    case '+':
        results = num1 + num2;
        std::cout << "Result: " << results << '\n';
        break;
    
    case '-': 
        results = num1 - num2;
        std::cout << "Result: " << results << '\n';
        break;
    
    case '*':
        results = num1 * num2;
        std::cout << "Result: " << results << '\n';
        break;
    case '/':
        results = num1 / num2;
        std::cout << "Result: " << results << '\n';
        break;
    
    default:
        std::cout << "Invalid operator\n";
        break;
    
    }
    
    std::cout << "**************************************";
}