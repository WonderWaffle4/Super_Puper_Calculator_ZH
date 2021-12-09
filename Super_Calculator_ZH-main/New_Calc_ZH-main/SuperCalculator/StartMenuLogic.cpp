#include "super_calculator_zh.h"

void enterCase(int option, HANDLE hStdOut){
    if(option == 2){
        cout << "\n\n exiting..." << endl;
    }
    if(option == 1){
        options();
        system("cls");
    }
    if(option == 0){
        Calculator(hStdOut);
        system("cls");
    }
}

int StartMenuLogic(int option, int key, HANDLE hStdOut){
    switch(key){
            case 72:
                if(option != 0)
                    option--;
                break;
            case 80:
                if(option != 2)
                    option++;
                    break;
            case 13:
                enterCase(option, hStdOut);
                if(option == 2)
                    return 10;
                break;
        }
            return option;
}
