#include "super_calculator_zh.h"

string substractCalculation(string num1, string num2){
    string newstr = "";
    bool desyatok = false;
    long long len = itc_len(num1);
    for(long long i = len - 1; i >= 0; i--){
        if(num1[i] - desyatok < num2[i]){
            newstr += num1[i] + 10 - num2[i] + '0' - desyatok;
            desyatok = true;
        }
        else{
            newstr += num1[i] - num2[i] + '0' - desyatok;
            desyatok = false;
        }
    }
    return newstr;
}
