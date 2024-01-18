#include "financials.h"
#include <iostream>

int main() {
    double presentValue, discountRate;
    int periods;

    std::cout << "Enter present value: ";
    std::cin >> presentValue;

    std::cout << "Enter discount rate (as a decimal): ";
    std::cin >> discountRate;

    std::cout << "Enter number of periods: ";
    std::cin >> periods;

    double futureValue = FinancialOperations::calculateFutureValue(presentValue, discountRate, periods);

    std::cout << "Future Value: " << futureValue << std::endl;

    return 0;
}
