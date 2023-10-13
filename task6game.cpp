#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void UpDownP_movement(int x, int y);
void Diagnol_movement(int x, int y);
main()
{
    int x = 1;
    int y = 1;
    system("cls");
    printMaze();
    while (true)
    {
        // UpDownP_movement(x, y);
        // y = y + 1;
        // if (y == 7)
        // {
        //     y = 3;
        // }
        Diagnol_movement(x, y);
        // x = x + 1;
        // y = y + 1;
        bool c;
        if (x == 8)
        {
            c = true;
        }
        else if (x == 0)
        {
            c = false;
        }
        if (c == true)
        {
            x--;
            y--;
        }
        else
        {
            x++;
            y++;
        }
    }
    gotoxy(0, 10);
}
void printMaze()
{
    cout << "#######################" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#######################" << endl;
}

void gotoxy(int x, int y)
{
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}

// void UpDownP_movement(int x, int y)
// {
//     gotoxy(x, y);
//     cout << "P";
//     Sleep(200);
//     gotoxy(x, y);
//     cout << " ";
// }

void Diagnol_movement(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
    gotoxy(x, y);
    cout << " ";
}