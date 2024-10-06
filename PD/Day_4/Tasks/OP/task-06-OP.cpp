#include<iostream>
#include<windows.h>

using namespace std ;

void gotoxy ( int x , int y ) ;
void printH ( int x , int y ) ;
void printA ( int x , int y ) ;
void printS ( int x , int y ) ;
void printN ( int x , int y ) ;

main () 
{
	system("cls") ;
	printH( 21 , 5  ) ;
	printA( 21 , 13 ) ; 
	printS( 20 , 21 ) ;
	printS( 20 , 29 ) ;
	printA( 21 , 37 ) ;
	printN( 19 , 45 ) ;

	gotoxy(0, 55) ;
}

void gotoxy ( int x , int y )
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printH ( int x , int y ) 
{
	gotoxy(x,y); cout << "##    ##" ; y=y+1;
	gotoxy(x,y); cout << "##    ##" ; y=y+1;
	gotoxy(x,y); cout << "##    ##" ; y=y+1;
	gotoxy(x,y); cout << "########" ; y=y+1;
	gotoxy(x,y); cout << "##    ##" ; y=y+1;
	gotoxy(x,y); cout << "##    ##" ; y=y+1;
	gotoxy(x,y); cout << "##    ##" ; y=y+1;
}

void printA( int x , int y )
{
	gotoxy ( x , y ) ; cout << " ###### " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "########" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##" ; y= y + 1 ;
		   
}

void printS ( int x , int y )
{
	gotoxy ( x , y ) ; cout << " ####### " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##       " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##       " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << " ####### " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "       ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "       ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << " ####### " ; y= y + 1 ;	 
}

void printN ( int x , int y ) 
{
	gotoxy ( x , y ) ; cout << "##        ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "## ##     ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ##    ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##   ##   ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##  ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##     ## ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##        ##" ; y= y + 1 ;
}