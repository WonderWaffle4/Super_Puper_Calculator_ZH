#include "super_calculator_zh.h"

string noMinus(string num){
    return itc_slice_str(num, 1, itc_len(num));
}
