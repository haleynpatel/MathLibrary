
#include <iostream>
#include "vector_operations.h"

int main() {
    // Vectors
    std::vector<int> vector_a = {1, 2, 3};
    std::vector<int> vector_b = {4, 5, 6};

    // Vector Addition
    std::vector<int> result_vector_add = VectorOperations::vectorAddition(vector_a, vector_b);
    std::cout << "Vector Addition Result: ";
    for (int value : result_vector_add) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;

    // Vector Subtraction
    std::vector<int> result_vector_subtract = VectorOperations::vectorSubtract(vector_a, vector_b);
    std::cout << "Vector Subtraction Result: ";
    for int (value : result_vector_subtract) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0; 
}
