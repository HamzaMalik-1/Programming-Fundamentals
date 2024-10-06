#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void enemyH();
void enemyV();
void enemyD();
void player();
void movePlayerLeft();
void movePlayerRight();
void erasePlayer();
void moveEnemyHorizontal();
void moveEnemyVertical();
void moveEnemyDiagonal();
void eraseEnemyH();
void eraseEnemyV();
void eraseEnemyD();
void maze();
    int pX =20 , pY=40 , eXH=60 , eYH=5,eXV=20,eYV=5 , eXD=70 ,eYD=15 , verticalReverse =1,horizontalReverse=1,digonalReverse=1;
main()
{
    maze();
     enemyH();   
     enemyV();   
     enemyD();   
     player();
    while (true)
    {
        moveEnemyHorizontal();
        moveEnemyVertical();
        moveEnemyDiagonal();
        
        if(GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            movePlayerRight();
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

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



void maze()
{
    cout << "##########################################################################################################################################################################" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##                                                                                                                                                                      ##" << endl;
    cout << "##########################################################################################################################################################################" << endl;
}
void enemyH()
{
    gotoxy(eXH, eYH+1); cout << "  _______  ";
    gotoxy(eXH, eYH+2); cout << " |       | ";
    gotoxy(eXH, eYH+3); cout << " |-------| ";
    gotoxy(eXH,eYH+4) ; cout << " |_______| ";
    gotoxy(eXH, eYH+5); cout << "    | |    ";
    gotoxy(eXH, eYH+6); cout << "    | |    ";
}
void enemyV()
{
    gotoxy(eXV, eYV+1); cout << "  _______  ";
    gotoxy(eXV, eYV+2); cout << " |       | ";
    gotoxy(eXV, eYV+3); cout << " |-------| ";
    gotoxy(eXV,eYV+4) ; cout << " |_______| ";
    gotoxy(eXV, eYV+5); cout << "    | |    ";
    gotoxy(eXV, eYV+6); cout << "    | |    ";
}
void enemyD()
{
    gotoxy(eXD, eYD+1); cout << "  _______  ";
    gotoxy(eXD, eYD+2); cout << " |       | ";
    gotoxy(eXD, eYD+3); cout << " |-------| ";
    gotoxy(eXD,eYD+4) ; cout << " |_______| ";
    gotoxy(eXD, eYD+5); cout << "    | |    ";
    gotoxy(eXD, eYD+6); cout << "    | |    ";
}

void player()
{
    gotoxy(pX,pY+1) ; cout << "    | |    ";
    gotoxy(pX,pY+2) ; cout << "  __| |__  ";
    gotoxy(pX,pY+3) ; cout << " |       | ";
    gotoxy(pX,pY+4) ; cout << " |-------| ";
    gotoxy(pX,pY+5) ; cout << " |_______| ";
}

void movePlayerLeft()
{
    if (getCharAtxy(pX-10,pY) == ' ')  
    {
    erasePlayer();
    pX=pX-1;
    player();
        
    }
    
}
void movePlayerRight()
{
    if (getCharAtxy(pX+15,pY)==' ')
    { 
     erasePlayer();
    pX=pX+1;
    player();
    }
}

void eraseEnemyH()
{
    Sleep(100);
    gotoxy(eXH,eYH+1) ; cout << "           ";
    gotoxy(eXH,eYH+2) ; cout << "           ";
    gotoxy(eXH,eYH+3) ; cout << "           ";
    gotoxy(eXH,eYH+4) ; cout << "           ";
    gotoxy(eXH,eYH+5) ; cout << "           ";
    gotoxy(eXH,eYH+6) ; cout << "           ";

}
void eraseEnemyV()
{
    Sleep(100);
    gotoxy(eXV,eYV+1) ; cout << "           ";
    gotoxy(eXV,eYV+2) ; cout << "           ";
    gotoxy(eXV,eYV+3) ; cout << "           ";
    gotoxy(eXV,eYV+4) ; cout << "           ";
    gotoxy(eXV,eYV+5) ; cout << "           ";
    gotoxy(eXV,eYV+6) ; cout << "           ";

}
void eraseEnemyD()
{
    Sleep(100);
    gotoxy(eXD,eYD+1) ; cout << "           ";
    gotoxy(eXD,eYD+2) ; cout << "           ";
    gotoxy(eXD,eYD+3) ; cout << "           ";
    gotoxy(eXD,eYD+4) ; cout << "           ";
    gotoxy(eXD,eYD+5) ; cout << "           ";
    gotoxy(eXD,eYD+6) ; cout << "           ";

}
void erasePlayer()
{
    Sleep(100);
    gotoxy(eXH,eYH+1) ; cout << "           ";
    gotoxy(eXH,eYH+2) ; cout << "           ";
    gotoxy(eXH,eYH+3) ; cout << "           ";
    gotoxy(eXH,eYH+4) ; cout << "           ";
    gotoxy(eXH,eYH+5) ; cout << "           ";

}

void moveEnemyHorizontal()
{ 
    eraseEnemyH();
    eXH=eXH+horizontalReverse;
     if (eXH==130 || eXH== 60)
    {
        horizontalReverse=-horizontalReverse;
    }
    
    enemyH();
    
}

void moveEnemyVertical()
{
    eraseEnemyV();
    eYV=eYV+verticalReverse;
    if (eYV==25 || eYV==5)
    {
        verticalReverse = -verticalReverse;
    }
    
    enemyV();
    
}
void moveEnemyDiagonal()
{
    eraseEnemyD();
    eYD=eYD+digonalReverse;
     eXD=eXD+digonalReverse;
     if (  eYD==15 || eYD==30 )
     {
        digonalReverse=-digonalReverse;
     }
     
    enemyD();
    
}