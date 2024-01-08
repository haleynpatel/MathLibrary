#include "../include/vector_operations.h"
#include <iostream>
// used the C++ vector data structure for the dynamic allocation of memory and ease of using convenient methods such as push_back


std::vector<int> VectorOperations::vectorAddition(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(a[i] + b[i]);
    }
    return result;
}

std::vector<int> VectorOperations::vectorSubtract(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(a[i] - b[i]);
    }
    return result;
}

std::vector<int> VectorOperations::vectorMultiply(const std::vector<int>& a, int scalar) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(a[i] * scalar);
    }
    return result;
}

void VectorOperations::printVector(const std::vector<int>& vec) {
    std::cout << "Vector: [";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}