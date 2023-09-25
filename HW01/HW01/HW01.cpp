#include "Header.h"
void DrawLine(int, string, Colors, bool);
int main()
{
    DrawLine(20, "@", RED, false);
}

void DrawLine(int count, string t, Colors color, bool choise)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
    for (int i = 0; i < count; i++)
    {
        if (choise == true)
        {
            cout << t;
        }
        else
        {
            cout << t << "\n";
        }
    }

    Sleep(120000);
}