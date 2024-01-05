#include "arithmetic_operations.h"
#include <iostream>

int MathOperations::add(int a, int b) {
    return a + b;
}

int MathOperations::multiply(int a, int b) {
    return a * b;
}

int MathOperations::divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Error: Division by zero condition!");
    }
    return a / b;
}

int MathOperations::subtract(int a, int b) {
    return a - b;
}