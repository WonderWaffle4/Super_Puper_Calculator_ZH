#include "super_calculator_zh.h"

void hideCursor(HANDLE hStdOut){
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut,&structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo( hStdOut, &structCursorInfo );
}
