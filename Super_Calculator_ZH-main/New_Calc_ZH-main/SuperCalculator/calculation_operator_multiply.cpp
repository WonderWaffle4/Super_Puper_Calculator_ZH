#include "super_calculator_zh.h"

string calculation_operator_multiply(bool firstPositive, bool secondPositive, string num1, string num2){
    if(num1 == "0" || num1 == "-0" || num2 == "0" || num2 == "-0")
        return "0";
    string buffer;
    string nozeros = countZeros(num1, num2);
    num1 = sliceZeros(num1);
    num2 = sliceZeros(num2);
    if(num1 == cCompare(num1, num2)){
        buffer = num2;
        num2 = num1;
        num1 = buffer;
    }
    if((firstPositive && secondPositive) || (!firstPositive && !secondPositive))
        return cmultiply(num1, num2, nozeros);
    return "-" + cmultiply(num1, num2, nozeros);
}
