#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void enemy(int x, int y);
void player(int x , int y);
void erasePlayer(int x , int y);
void maze();
main()
{
    int px =20 , py=100;
    Sleep(400);
    while (true)
    {
     erasePlayer(px,py);   
     player(px,py);
    }
}

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}


void maze()
{
    cout << "####################################################################################################################################################################################" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "##                                                                                                                                                                                ##" << endl;
    cout << "####################################################################################################################################################################################" << endl;
}
void enemy(int x, int y)
{
    gotoxy(x, y); cout << "  _______  ";
    gotoxy(x, y); cout << " |       | ";
    gotoxy(x, y); cout << " |-------| ";
    gotoxy(x,y) ; cout << " |_______| ";
    gotoxy(x, y); cout << "    | |    ";
    gotoxy(x, y); cout << "    | |    ";
}

void player(int x , int y)
{
    gotoxy(x,y) ; cout << "    | |    ";
    gotoxy(x,y) ; cout << "  __| |__  ";
    gotoxy(x,y) ; cout << " |       | ";
    gotoxy(x,y) ; cout << " |-------| ";
    gotoxy(x,y) ; cout << " |_______| ";
}

void erasePlayer(int x , int y)
{
    Sleep(400);
    gotoxy(x,y) ; cout << "           ";
    gotoxy(x,y) ; cout << "           ";
    gotoxy(x,y) ; cout << "           ";
    gotoxy(x,y) ; cout << "           ";
    gotoxy(x,y) ; cout << "           ";

}