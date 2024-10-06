#include<iostream>
#include<windows.h>

using namespace std ;

void gotoxy(int x, int y) ;

void printH ( int x , int y ) ;
void printA ( int x , int y ) ;
void printM ( int x , int y ) ;	
void printZ ( int x , int y ) ;

main () 
{
	system ( " cls " ) ;

	printH ( 50 , 15 ) ;
	printA ( 60 , 15 ) ;
	printM ( 68 , 15 ) ;
	printZ ( 84 , 15 ) ;	
	printA ( 92 , 15 ) ;

	gotoxy ( 100 , 25 ) ; 

	
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printH( int x , int y ) 
{
	
 	
	gotoxy ( x , y ) ; cout << "##    ##"  ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##"  ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##"  ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "########"  ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##"  ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##"  ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    ##"  ; y= y + 1 ;
	
}

void printA( int x , int y )
{
	gotoxy ( x , y ) ; cout << " #### " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "######" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ##" ; y= y + 1 ;
		   
}

void printM ( int x , int y )
{
	gotoxy ( x , y ) ; cout << "####     ####" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "## ##   ## ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##  ## ##  ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##   ###   ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##         ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##         ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##         ##" ; y= y + 1 ;
}

void printZ ( int x , int y ) 
{
	gotoxy ( x , y ) ; cout << "######" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "    ##" ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "   ## " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "  ##  " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << " ##   " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "##    " ; y= y + 1 ;
	gotoxy ( x , y ) ; cout << "######" ; y= y + 1 ;


}