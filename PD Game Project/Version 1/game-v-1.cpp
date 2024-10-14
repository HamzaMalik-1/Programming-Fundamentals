#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// Global Variable
int pX = 25, pY = 13, eXV1 = 31, eYV1 = 2, eXV2 = 6, eYV2 = 9, eXH = 20, eYH = 30, eXD = 20, eYD = 40, score = 0;
string verticalEnemyLocation1 = "top", verticalEnemyLocation2 = "bottom";

// Function Prototype
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);

// To Print Maze
void maze(int x, int y);

// Functions For Player
void printPlayer();
void erasePlayer();
void movePlayer();

// Functions For Enemy 1
void printVerticalEnemy1();
void eraseVerticalEnemy1();
void moveVerticalEnemy1();
void changeVerticalEnemyDirection1();

// Functions For Enemy 2
void printVerticalEnemy2();
void eraseVerticalEnemy2();
void moveVerticalEnemy2();
void changeVerticalEnemyDirection2();

// Functions For Enemies Movement 
void printHorizontalEnemy();
void printDiagonalEnemy();


//Print Score
void printScore();

// To check Collision
bool checkCollision();

main()
{
    system("cls");
    maze(0, 0);
    printVerticalEnemy1();
    printVerticalEnemy2();
    printPlayer();
    while (true)
    {
        printScore();
        moveVerticalEnemy1();
        moveVerticalEnemy2();
        movePlayer();
       if (checkCollision())
       {
        return 0;
       }
       
        Sleep(200);
    }

    getch();
}

// Defination of gotoxy Function
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

// Defination of getCharAtxy Function
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

// Function to print maze
void maze(int x, int y)
{
    system("Color 0A");
    gotoxy(x, y);
    cout << "######################################################################" << endl;
    gotoxy(x, y + 1);
    cout << "||.. ...................................................    ......  ||" << endl;
    gotoxy(x, y + 2);
    cout << "||.. %%%%%%%%%%%%%%%        ...    %%%%%%%%%%%%%  |%|..      %%%%%  ||" << endl;
    gotoxy(x, y + 3);
    cout << "||..      |%|    |%|     |%|...    |%|       |%|  |%|..        |%|  ||" << endl;
    gotoxy(x, y + 4);
    cout << "||..      |%|    |%|     |%|...    |%|       |%|  |%|..        |%|  ||" << endl;
    gotoxy(x, y + 5);
    cout << "||..      %%%%%%%%%% . . |%|...    %%%%%%%%%%%%%     ..      %%%%%. ||" << endl;
    gotoxy(x, y + 6);
    cout << "||..      |%|        . . |%|...    ............. |%| ..           . ||" << endl;
    gotoxy(x, y + 7);
    cout << "||..      %%%%%%%%%%%. . |%|...    %%%%%%%%%%    |%| ..      %%%%%. ||" << endl;
    gotoxy(x, y + 8);
    cout << "||..              |%|.             |%|.....      |%| ..        |%|. ||" << endl;
    gotoxy(x, y + 9);
    cout << "||..     ........ |%|.             |%|........|%|       ..     |%|. ||" << endl;
    gotoxy(x, y + 10);
    cout << "||..|%|  |%|%%|%|.|%|. |%|            ........|%|       ..|%|  |%|. ||" << endl;
    gotoxy(x, y + 11);
    cout << "||..|%|  |%|  |%|..    %%%%%%%%%%%%%  ........|%|        .|%|. |%|. ||" << endl;
    gotoxy(x, y + 12);
    cout << "||..|%|  |%|  |%|..           ...|%|       %%%%%%       . |%|.      ||" << endl;
    gotoxy(x, y + 13);
    cout << "||..|%|           .           ...|%|              |%|   ..|%|.      ||" << endl;
    gotoxy(x, y + 14);
    cout << "||..|%|  %%%%%%%%%%%%         ...|%|%%%%%%%%%%    |%|   ..|%|%%%%%% ||" << endl;
    gotoxy(x, y + 15);
    cout << "||..............................................  |%|   ........... ||" << endl;

    gotoxy(x, y + 16);
    cout << "||   ...........................................           ........ ||" << endl;
    gotoxy(x, y + 17);
    cout << "||..|%|  |%|  |%|..   %%%%%%%%%%%%%%  .......|%|  |%|   ..|%|.      ||" << endl;
    gotoxy(x, y + 18);
    cout << "||..|%|  |%|  |%|..           ...|%|     %%%%%%%  |%|   ..|%|.      ||" << endl;
    gotoxy(x, y + 19);
    cout << "||..|%|           .           ...|%|              |%|   ..|%|.      ||" << endl;
    gotoxy(x, y + 20);
    cout << "||..|%|  %%%%%%%%%%%%%        ...|%|%%%%%%%%%%%   |%|   ..|%|%%%%%  ||" << endl;
    gotoxy(x, y + 21);
    cout << "||..............................................  |%|   ..........  ||" << endl;
    gotoxy(x, y + 22);
    cout << "||  ............................................           .......  ||" << endl;
    gotoxy(x, y + 23);
    cout << "######################################################################" << endl;
}

// Function to print player
void printPlayer()
{
    
    gotoxy(pX, pY);
    cout << "P";
}

// Function to erase player
void erasePlayer()
{
    gotoxy(pX, pY);
    cout << " ";
}

// Function to move player
void movePlayer()
{
    if (GetAsyncKeyState(VK_RIGHT))
    {
        if (getCharAtxy(pX + 1, pY) == ' ' || getCharAtxy(pX + 1, pY) == '.')
        {

            if (getCharAtxy(pX + 1, pY) == '.')
            {
                score = score + 1;
            }
            erasePlayer();
            pX = pX + 1;
            printPlayer();
        }
    }

    if (GetAsyncKeyState(VK_LEFT))
    {
        if (getCharAtxy(pX - 1, pY) == ' ' || getCharAtxy(pX - 1, pY) == '.')
        {
            if (getCharAtxy(pX - 1, pY) == '.')
            {
                score = score + 1;
            }
            erasePlayer();
            pX = pX - 1;
            printPlayer();
        }
    }

    if (GetAsyncKeyState(VK_UP))
    {
        if (getCharAtxy(pX, pY - 1) == ' ' || getCharAtxy(pX, pY - 1) == '.')
        {
            if (getCharAtxy(pX, pY - 1) == '.')
            {
                score = score + 1;
            }
            erasePlayer();
            pY = pY - 1;
            printPlayer();
        }
    }

    if (GetAsyncKeyState(VK_DOWN))
    {
        if (getCharAtxy(pX, pY + 1) == ' ' || getCharAtxy(pX, pY + 1) == '.')
        {
            if (getCharAtxy(pX, pY + 1) == '.')
            {
                score = score + 1;
            }
            erasePlayer();
            pY = pY + 1;
            printPlayer();
        }
    }

    gotoxy(1, 100);
}

// Function to for horizontal to print of enemy
void printHorizontalEnemy()
{
    gotoxy(eXH, eYH);
    cout << "G";
}

// Function to for Diagonal to print of enemy
void printDiagonalEnemy()
{
    gotoxy(eXD, eYD);
    cout << "G";
}

// Function to for Vertical to print of enemy
void printVerticalEnemy1()
{
    gotoxy(eXV1, eYV1);
    cout << "G";
}

// Function to Erase  enemy 1
void eraseVerticalEnemy1()
{
    gotoxy(eXV1, eYV1);
    cout << " ";
}

// Function to move  enemy 1
void moveVerticalEnemy1()
{
    eraseVerticalEnemy1();
    if (verticalEnemyLocation1 == "top")
    {
        eYV1 = eYV1 + 1;
    }
    if (verticalEnemyLocation1 == "bottom")
    {
        eYV1 = eYV1 - 1;
    }
    changeVerticalEnemyDirection1();
    printVerticalEnemy1();
}

// Function to change direction of  enemy 1
void changeVerticalEnemyDirection1()
{
    if (eYV1 == 10)
    {
        verticalEnemyLocation1 = "bottom";
    }
    if (eYV1 == 2)
    {
        verticalEnemyLocation1 = "top";
    }
}

// Function to print  enemy 2
void printVerticalEnemy2()
{
    gotoxy(eXV2, eYV2);
    cout << "G";
}

// Function to erase  enemy 2
void eraseVerticalEnemy2()
{
    gotoxy(eXV2, eYV2);
    cout << " ";
}

// Function to move  enemy 2
void moveVerticalEnemy2()
{
    eraseVerticalEnemy2();
    if (verticalEnemyLocation2 == "top")
    {
        eYV2 = eYV2 + 1;
    }
    if (verticalEnemyLocation2 == "bottom")
    {
        eYV2 = eYV2 - 1;
    }
    changeVerticalEnemyDirection2();
    printVerticalEnemy2();
}

// Function to change direction of  enemy 2
void changeVerticalEnemyDirection2()
{
    if (eYV2 == 9)
    {
        verticalEnemyLocation2 = "bottom";
    }
    if (eYV2 == 3)
    {
        verticalEnemyLocation2 = "top";
    }
}

// Function to Print Score
void printScore()
{
    gotoxy(100, 1);
    cout << "Score : " << score;
}

// Function to Detect Collision
bool checkCollision()
{
   if (getCharAtxy(pX + 1, pY) == 'G' || getCharAtxy(pX - 1, pY) == 'G' || getCharAtxy(pX, pY - 1) == 'G' || getCharAtxy(pX, pY + 1) == 'G')
   {
    gotoxy(100,5);
    cout<< "Game End ";
    gotoxy(100,7);
    cout << "Press any key to exit";
    getch();
    return true;
   }
}

