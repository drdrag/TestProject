//
// Created by dkozh on 15-Jun-23.
//

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
    double firstNumber;
    char sign;
    double secondNumber;
public:
    Calculator() = default;
    Calculator(double firstNumber, char sign, double secondNumber);
    double calculate();
    virtual ~Calculator() = default;
};

#endif
