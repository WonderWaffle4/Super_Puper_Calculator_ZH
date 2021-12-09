#include "super_calculator_zh.h"

unsigned long long itc_toInt(string s){
    long long num = 0;
    for(long long i = 0; i < itc_len(s); i++){
        num += s[i] - 48;
        num *= 10;
    }
    num /= 10;
    return num;
}
