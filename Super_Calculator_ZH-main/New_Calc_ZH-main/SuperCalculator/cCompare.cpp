#include "super_calculator_zh.h"

string cCompare(string num1 , string num2){
    long long len1 = itc_len(num1);
    long long len2 = itc_len(num2);
    if(len1 > len2)
        return num1;
    if(len2 > len1)
        return num2;
    for(long long i = 0; i < len1; i++){
        if(num1[i] > num2[i])
            return num1;
        else if(num2[i] > num1[i])
            return num2;
    }
    return num1;
}
