#include <iostream>
#include "arithmetic_operations.h"


int main() {
    int result_add = MathOperations::add(3, 4);
    int result_subtract = MathOperations::subtract(1, 5);
    int result_multiply = MathOperations::multiply(2, 5);
    int result_divide = MathOperations::divide(10, 2);
    int result_divide_by_zero = MathOperations::divide(10, 0);

    std::cout << "Addition Result: " << result_add << std::endl;
    std::cout<< "Subtraction Result: " << result_subtract << std::endl; 
    std::cout << "Multiplication Result: " << result_multiply << std::endl;
    std::cout << "Division Result: " << result_divide << std::endl;
    std::cout << "Zero Division Result: " << result_divide_by_zero << std::endl;

    return 0;
}