#include "super_calculator_zh.h"

string calculation_operator_plus(bool firstPositive, bool secondPositive, string num1, string num2){
    if(firstPositive && secondPositive)
        return csum(num1, num2);
    if(!firstPositive && !secondPositive && csum(num1, num2) != "0")
        return "-" + csum(num1, num2);
    if(((!firstPositive && num1 == cCompare(num1, num2)) || (!secondPositive && num2 == cCompare(num1, num2))) && num1 != num2)
        return (csubstract(num1, num2) != "0") ? "-" + csubstract(num1, num2) : csubstract(num1, num2);
    else
        return csubstract(num1, num2);
    return "error";
}
