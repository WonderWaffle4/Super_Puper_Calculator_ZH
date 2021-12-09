#include "super_calculator_zh.h"

string csum(string num1, string num2){
    string newstr = "";
    bool desyatok = false;
    while(itc_len(num1) < itc_len(num2))
        num1 = "0" + num1;
    while(itc_len(num2) < itc_len(num1))
        num2 = "0" + num2;
    long long len = itc_len(num1);
    for(long long i = len - 1; i >= 0 || desyatok; i--){
        if(i >= 0){
            newstr += (num1[i] - 48 + num2[i] - 48 + desyatok) % 10 + 48;
            if(num1[i] - 48 + num2[i] - 48 + desyatok > 9)
                desyatok = true;
            else
                desyatok = false;
        }
        else{
            newstr += "1";
            desyatok = false;
        }
    }
    return itc_reverse_str(newstr);
}
