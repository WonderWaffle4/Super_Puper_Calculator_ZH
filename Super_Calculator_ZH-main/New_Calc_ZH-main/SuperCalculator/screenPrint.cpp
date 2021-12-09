#include "super_calculator_zh.h"

void screenPrint(string num){
    long long len = itc_len(num);
    if(len > 13){
        len = 13;
        num = itc_reverse_str(num);
        num = itc_slice_str(num, 0, 12);
        num = itc_reverse_str(num);
    }
    gotoxy(27 - len, 2);
    cout << num;
}
