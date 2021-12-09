#ifndef SUPER_CALCULATOR_ZH_H_INCLUDED
#define SUPER_CALCULATOR_ZH_H_INCLUDED

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>


using namespace std;

unsigned long long itc_toInt(string s);

long long itc_len(string str);

string sliceZeros(string num);
string countZeros(string num1, string num2);
string csum(string num1, string num2);
string cCompare(string num1 , string num2);
string itc_toString(unsigned long long num);
string itc_reverse_str(string str);
string csubstract(string num1, string num2);
string cmultiply(string num1, string num2, string endzeros);
string substractCalculation(string num1, string num2);
string noZero(string num);
string itc_slice_str(string str, int start, int last);
string calculationController(string num1, string num2, string operation);
string calculation_operator_plus(bool firstPositive, bool secondPositive, string num1, string num2);
string calculation_operator_multiply(bool firstPositive, bool secondPositive, string num1, string num2);
string noMinus(string num);
string itc_removeSpace(string str);
string calcButtons(string button);

bool isPositive(string num);

void gotoxy(int x, int y);
void StartMenuColor(HANDLE hStdOut, int option);
void Calculator(HANDLE hStdOut);
void hideCursor(HANDLE hStdOut);
void PrintCalculator();
void screenPrint(string num);
void operationsList(string num1, string operation, string num2, string num);
void options();

int StartMenuLogic(int option, int key, HANDLE hStdOut);
int NumPadControl(char key, int stolb, int stroke);
int charToInt(char c);

char NumpadInput(HANDLE hStdOut, int stolb, int stroke, string num);

#endif // SUPER_CALCULATOR_ZH_H_INCLUDED
