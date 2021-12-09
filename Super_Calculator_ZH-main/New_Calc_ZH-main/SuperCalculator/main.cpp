#include "super_calculator_zh.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
int main()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    hideCursor(hStdOut);
    int option = 0;
    while(option != 10){
        gotoxy(0, 0);
        StartMenuColor(hStdOut, option);
        char key = getch();
        option = StartMenuLogic(option, key, hStdOut);
    }
    return 0;
}
