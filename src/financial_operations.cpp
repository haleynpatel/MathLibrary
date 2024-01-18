#include "financials.h"

//single cash flow
double FinancialOperations::calculatePresentValue(double futureValue, double discountRate, int periods) {
    return futureValue / pow(1 + discountRate, periods);
}

double FinancialOperations::calculateFutureValue(double presentValue, double discountRate, int periods) {
    return presentValue * pow(1 + discountRate, periods);
}