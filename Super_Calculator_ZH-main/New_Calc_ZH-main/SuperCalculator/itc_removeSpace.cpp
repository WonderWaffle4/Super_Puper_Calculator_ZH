#include "super_calculator_zh.h"

string itc_removeSpace(string str){
    string newstr = "";
    for(unsigned long long i = 0; i < itc_len(str); i++){
        if(str[i] != ' ') newstr += str[i];
    }
    return newstr;
}
