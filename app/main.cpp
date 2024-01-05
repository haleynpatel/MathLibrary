#include <iostream>
#include "operations.h"

int main() {
    int result_add = MathOperations::add(3, 4);
    int result_multiply = MathOperations::multiply(2, 5);

    std::cout << "Addition Result: " << result_add << std::endl;
    std::cout << "Multiplication Result: " << result_multiply << std::endl;

    return 0;
}