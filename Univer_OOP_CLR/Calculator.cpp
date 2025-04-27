#include "Calculator.h"
#include <cmath>

double Calculator::add(double a, double b) { 
    return a + b; 
}

double Calculator::subtract(double a, double b) { 
    return a - b; 
}

double Calculator::multiply(double a, double b) { 
    return a * b; 
}

double Calculator::divide(double a, double b) {
    return b != 0 ? a / b : 0; 
}

double Calculator::sqrt(double a) {
    return std::sqrt(a); 
}

double Calculator::power(double base, double a) {
    return std::pow(base, a); 
}

double Calculator::sin(double a) { 
    return std::sin(a); 
}

double Calculator::cos(double a) { 
    return std::cos(a); 
}

double Calculator::tan(double a) { 
    return std::tan(a); 
}

double Calculator::ln(double a) { 
    return std::log(a); 
}

int Calculator::factorial(int a) {
    if (a < 0) return 0;

    int result = 1;
    for (int i = 2; i <= a; ++i) {
        result *= i;
    }
    return result;
}