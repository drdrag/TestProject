#include <iostream>
#include <stdexcept>
#include <cmath>
#include "calculator.h"

int main(int argc, char** argv)
{
    double result = 0;
    if(argc != 4)
    {
        throw std::invalid_argument("PLease pass 3 arguments: <number1> <sign> <number2>");
    }
    else
    {
        double firstNumber = std::stod(argv[1]);
        char sign = *(argv[2]);
        double secondNumber = std::stod(argv[3]);
        Calculator mCalculator{firstNumber, sign, secondNumber};
        result = mCalculator.calculate();
        if(secondNumber<0 && sign == '-')
        {
            std::cout << firstNumber << "+" << abs(secondNumber) << "=" << result << std::endl;
        }
        else if(secondNumber<0 && (sign == '+' || sign == '-'))
        {
            std::cout << firstNumber << "" << secondNumber << "=" << result << std::endl;
        }
        else
        {
            std::cout << firstNumber << "" << argv[2] << "" << secondNumber << "=" << result << std::endl;
        }
    }
    return result;
}
