
#include <iostream>
#include "vector_operations.h"

int main() {
    // Vectors
    std::vector<int> vector_a = {1, 2, 3};
    std::vector<int> vector_b = {4, 5, 6};
    int scalar = 5;
    // Vector Addition
    std::vector<int> result_vector_add = VectorOperations::vectorAddition(vector_a, vector_b);
    std::cout << "Vector Addition Result: ";
    VectorOperations::printVector(result_vector_add);

    // Vector Subtraction
    std::vector<int> result_vector_subtract = VectorOperations::vectorSubtract(vector_a, vector_b);
    std::cout << "Vector Subtraction Result: ";
    VectorOperations::printVector(result_vector_subtract);

    // Vector Scalar Multiplication with Scalar
    std::vector<int> result_scalar = VectorOperations::vectorMultiply(vector_a, scalar);
    std::cout << "Vector Scalar Multiplication Result: ";
    VectorOperations::printVector(result_scalar);

    return 0;
}
