#include "super_calculator_zh.h"

string noZero(string num){
    long long index = 0;
    if(num[index] == '-')
        index++;
    while(num[index] == '0' && index < itc_len(num))
        index++;
    if(index == itc_len(num))
        return "0";
    return itc_slice_str(num, index, itc_len(num));
}
