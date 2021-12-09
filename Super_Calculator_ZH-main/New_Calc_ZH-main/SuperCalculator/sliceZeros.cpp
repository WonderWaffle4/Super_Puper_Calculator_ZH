#include "super_calculator_zh.h"

string sliceZeros(string num){
    string newstr = "";
    bool wasOnZero = true;
    for(long long i = itc_len(num) - 1; i >= 0; i--){
        if(num[i] != '0' && wasOnZero)
            wasOnZero = false;
        if(!wasOnZero)
            newstr = num[i] + newstr;
    }
    return newstr;
}
