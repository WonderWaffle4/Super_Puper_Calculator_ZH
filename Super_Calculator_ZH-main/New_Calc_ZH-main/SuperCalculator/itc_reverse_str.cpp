#include "super_calculator_zh.h"

string itc_reverse_str(string str){
    string newstr = "";
    for(int i = itc_len(str) - 1; i >= 0; i--){
        newstr += str[i];
    }
    return newstr;
}
