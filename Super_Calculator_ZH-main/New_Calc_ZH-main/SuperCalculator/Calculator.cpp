#include "super_calculator_zh.h"
#define ENTER 13

void cButton(string &num1, string &num2, string &num, string &operation, bool &operationPressed){
    num = "0";
    num1 = "";
    num2 = "";
    operation = "";
    operationPressed = false;
}

void buttonLogic(string &num1, string &num2, string &num, string &operation, bool &operationPressed, char button){
    if((button >= '0' && button <= '9') || (button == '-' && (num1 == "" || (num2 == "" && operation != "")))){
                if(!operationPressed) {num1 += button; num = num1;}
                if(operationPressed) {num2 += button; num = num2;}
            }
            else if(button == '=' && num1 != "" && num2 != "") {
                num = calculationController(num1, num2, operation);
                if(num == "error"){
                    cButton(num1, num2, num, operation, operationPressed);
                    num = "error";
                }
                else{
                    operationsList(num1, operation, num2, num);
                    num1 = num;
                }
                num2 = "";
                operation = "";
             }
            else if(button == 'C')
                cButton(num1, num2, num, operation, operationPressed);
            else if(button != '=' && num1 != ""){operation = button; num = operation; operationPressed = true;}
}

void Calculator(HANDLE hStdOut){
    system("cls");
    bool operationPressed = false;
    string num =  "0", num1 = "", num2 = "", operation = "";
    char key, button;
    int cursorLocation = 100;
    NumpadInput(hStdOut, 0, 0, "0");
    screenPrint(num);
    while(key != 27){
        key = getch();
        gotoxy(0, 0);
        cursorLocation = NumPadControl(key, cursorLocation % 100 / 10, cursorLocation % 10);
        button = NumpadInput(hStdOut, cursorLocation % 100 / 10, cursorLocation % 10, num);
        if(key == ENTER)
            buttonLogic(num1, num2, num, operation, operationPressed, button);
        screenPrint(num);
        if(num == "error")
            num = "0";
    }
}
//        if((button >= '0' && button <= '9') || (button == '-' && (num1 == "" || (num2 == "" && operation != "")))){
//        if(key == ENTER && !operationPressed) {num1 += button; num = num1;}
//        if(key == ENTER && operationPressed) {num2 += button; num = num2;}
//        screenPrint(num);
//        }
//        else if(key == ENTER && button == '=') screenPrint(calculationController(num1, num2, operation));
//        else if(key == ENTER ){
//            operation = button;
//            num = operation;
//            operationPressed = true;
//            screenPrint(num);
//        }
//        else
//            screenPrint(num);
