// Vector Operations
#pragma once

#include <vector>

class VectorOperations {
public:
    static std::vector<int> add(const std::vector<int>& a, const std::vector<int>& b);
    static std::vector<int> multiply(const std::vector<int>& a, int scalar);
    static std::vector<int> subtract(const std::vector<int>& a, const std::vector<int>& b);
    static std::vector<int> crossProduct(const std::vector<int>& a, const std::vector<int>& b);
    static int dotProduct(const std::vector<int>& a, const std::vector<int>& b);
    static double magnitude(const std::vector<int>& a);
    
};