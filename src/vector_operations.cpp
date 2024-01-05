#include "vector_operations.h"

std::vector<int> VectorOperations::vectorAddition(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(a[i] + b[i]);
    }
    return result;
}

