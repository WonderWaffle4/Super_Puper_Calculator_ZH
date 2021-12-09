#include "super_calculator_zh.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13

int NumPadControl(char key, int stolb, int stroke){
    switch(key){
    case KEY_UP:
        (stroke == 0) ? stroke = 3 : stroke--;
        break;
    case KEY_DOWN:
        (stroke == 3) ? stroke = 0 : stroke++;
        break;
    case KEY_LEFT:
        (stolb == 0) ? stolb = 3 : stolb--;
        break;
    case KEY_RIGHT:
        (stolb == 3) ? stolb = 0 : stolb++;
        break;
    }
    return 100 + stolb * 10 + stroke;
}
