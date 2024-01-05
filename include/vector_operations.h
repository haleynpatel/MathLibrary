// Vector Operations
#pragma once

#include <vector>

class VectorOperations {
public:
    static std::vector<int> vectorAddition(const std::vector<int>& a, const std::vector<int>& b);
    static std::vector<int> vectorMultiply(const std::vector<int>& a, int scalar);
    static std::vector<int> vectorSubtract(const std::vector<int>& a, const std::vector<int>& b);
    static std::vector<int> vectorCrossProduct(const std::vector<int>& a, const std::vector<int>& b);
    static int vectorDotProduct(const std::vector<int>& a, const std::vector<int>& b);
    static double vectorMagnitude(const std::vector<int>& a);

    static void printVector(const std::vector<int>& vec);

};