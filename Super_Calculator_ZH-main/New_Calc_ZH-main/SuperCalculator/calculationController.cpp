#include "super_calculator_zh.h"

string calculationController(string num1, string num2, string operation){
    bool firstPositive = isPositive(num1);
    num1 = noZero(num1);
    num2 = noZero(num2);
    if(!firstPositive)
        num1 = noMinus(num1);
    bool secondPositive = isPositive(num2);
    if(!secondPositive)
        num2 = noMinus(num2);
    if(operation == "+")
        return calculation_operator_plus(firstPositive, secondPositive, num1, num2);
    if(operation == "-")
        return calculation_operator_plus(firstPositive, !secondPositive, num1, num2);
    if(operation == "*")
        return calculation_operator_multiply(firstPositive, secondPositive, num1, num2);
    return "error";
}
