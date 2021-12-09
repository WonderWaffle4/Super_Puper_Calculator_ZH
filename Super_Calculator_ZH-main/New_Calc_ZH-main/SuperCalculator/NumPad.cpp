#include "super_calculator_zh.h"

char NumpadInput(HANDLE hStdOut, int stolb, int stroke, string num){
    int x = 11, y = 5;
    PrintCalculator();
    gotoxy(x, y);
    char numpad[4][4] = {'1', '2', '3', '/', '4', '5', '6', '*', '7', '8', '9', '+', 'C', '0', '-', '='};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            gotoxy(x, y);
            if(i == stroke && j == stolb)
                SetConsoleTextAttribute(hStdOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
            cout << numpad[i][j];
            SetConsoleTextAttribute(hStdOut, 15);
            x += 4;
        }
        y += 2;
        x = 11 - (i+1) * 2;
        cout << endl;
    }
    return numpad[stroke][stolb];
}
