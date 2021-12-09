#include "super_calculator_zh.h"

void StartMenuColor(HANDLE hStdOut, int option){
    if(option == 0)
            SetConsoleTextAttribute(hStdOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
        cout << "Start" << endl;
        SetConsoleTextAttribute(hStdOut, 15);
        if(option == 1)
            SetConsoleTextAttribute(hStdOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
        cout << "Options" << endl;
        SetConsoleTextAttribute(hStdOut, 15);
        if(option == 2)
            SetConsoleTextAttribute(hStdOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
        cout << "Exit" << endl;
        SetConsoleTextAttribute(hStdOut, 15);
}
