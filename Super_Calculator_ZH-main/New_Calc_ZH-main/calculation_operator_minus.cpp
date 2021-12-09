#include "super_calculator_zh.h"

string calculation_operator_minus(bool firstPositive, bool secondPositive, string num1, string num2){
    if(firstPositive && !secondPositive)
        return csum(num1, num2);
    if(!firstPositive && secondPositive)
        return "-" + csum(num1, num2);

}
