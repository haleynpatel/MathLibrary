
#include <iostream>
#include "../include/vector_operations.h"
#include "C:/Users/Haley/Documents/MathLibrary/src/vector_operations.cpp"

int main() {
    // Vectors
    std::vector<int> vector_a = {1, 2, 3};
    std::vector<int> vector_b = {4, 5, 6};

    // Vector Addition
    std::vector<int> result_vector_add = VectorOperations::vectorAddition(vector_a, vector_b);
    std::cout << "Vector Addition Result: ";
    VectorOperations::printVector(result_vector_add);

    // Vector Subtraction
    std::vector<int> result_vector_subtract = VectorOperations::vectorSubtract(vector_a, vector_b);
    std::cout << "Vector Subtraction Result: ";
    VectorOperations::printVector(result_vector_subtract);

    return 0;
}
