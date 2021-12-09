#include "super_calculator_zh.h"

long long eraseLen = 0;

void operationsList(string num1, string operation, string num2, string num){
    long long y = 2;
    long long x = 34;
    for(long long i = 0; i < eraseLen; i++){
        gotoxy(x, y);
        cout << " ";
        if(i % 30 == 0 && i != 0){
            x = 34;
            y++;
            cout << endl;
        }
        else
            x++;
    }
    y = 2;
    x = 34;
    gotoxy(34, 1);
    cout << "OPERATION:";
    gotoxy(34, 2);
    string newstr = num1 + " " + operation + " " + num2 + " = " + num;
    eraseLen = itc_len(newstr);
    long long len = itc_len(newstr);
    for(long long i = 0; i < len; i++){
        gotoxy(x, y);
        cout << newstr[i];
        if(i % 30 == 0 && i != 0){
            cout << endl;
            x = 34;
            y++;
        }
        else
            x++;
    }
}
