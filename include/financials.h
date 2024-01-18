// Financial Calculators
#pragma once

#include <cmath>

class FinancialOperations {
public:
    static double presentValue(double futureValue, double discountRate, int periods);
    static double futureValue(double presentValue, double discountRate, int periods);
};