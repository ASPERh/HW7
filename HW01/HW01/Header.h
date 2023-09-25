#pragma once
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cmath>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

enum Colors { BLACK, DARKBLUE, DARKGREEN, DARKCYAN, DARKRED, DARKMAGENTA, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN, CYAN, RED, MAGENTA, YELLOW, WHITE };
void SetCursor(int x, int y, Colors color, string text)
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(h, pos);
    SetConsoleTextAttribute(h, color);
    cout << text;
    cout << "\n";
}