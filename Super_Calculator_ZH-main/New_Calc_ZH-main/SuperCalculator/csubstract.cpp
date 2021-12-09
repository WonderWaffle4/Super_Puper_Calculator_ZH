#include "super_calculator_zh.h"

string csubstract(string num1, string num2){
    string newstr = "";
    string buffer = "";
    if(num2 == cCompare(num1, num2)){
        buffer = num1;
        num1 = num2;
        num2 = buffer;
    }
    while(itc_len(num2) < itc_len(num1))
        num2 = "0" + num2;
    newstr = substractCalculation(num1, num2);
    return noZero(itc_reverse_str(newstr));
}
