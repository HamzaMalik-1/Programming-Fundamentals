#include<iostream>
#include<windows.h>

using namespace std ;


void gotoxy ( int x , int y );
void printMaze ( int x , int y) ;
void movePlayer( int x , int y ) ;

main ()
{	int y = 7 , x = 10 , z = 1 ;
	system("cls");	
	printMaze(5,5) ;
	
	while( true ) 
	{
		movePlayer(x,y);
		y=y+z;
		
		if ( y == 11)
		{
			z = -1 * z ;
		}
		if ( y == 7 ) 
		{
			z = -1 * z ;	
		}
	}
}

void gotoxy ( int x , int y )
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



void printMaze(int x , int y)
{
	gotoxy(x,y); cout << "#######################" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#                     #" ; y = y + 1 ;
	gotoxy(x,y); cout << "#######################" ; y = y + 1 ;	
}

void movePlayer( int x , int y ) 
{
	gotoxy ( x , y ) ;
	cout << "P" ;
	Sleep ( 300 ) ;
	gotoxy ( x , y ) ;
	cout << " " ;
}