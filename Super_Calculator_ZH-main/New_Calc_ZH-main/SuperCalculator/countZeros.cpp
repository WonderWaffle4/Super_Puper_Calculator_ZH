#include "super_calculator_zh.h"

string countZeros(string num1, string num2){
    string nozeros = "";
    long long n1 = itc_toInt(num1);
    long long n2 = itc_toInt(num2);
    while(n1 % 10 == 0){
        n1 /= 10;
        nozeros += "0";
    }
    while(n2 % 10 == 0){
        n2 /= 10;
        nozeros += "0";
    }
    return nozeros;
}
