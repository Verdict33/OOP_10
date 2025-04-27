#pragma once

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double sqrt(double a);
    double power(double base, double a);
    double sin(double a);
    double cos(double a);
    double tan(double a);
    double ln(double a);
    int factorial(int a);
};
