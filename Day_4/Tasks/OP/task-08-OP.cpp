#include<iostream>
#include<windows.h>

using namespace std ;
void gotoxy ( int x , int y );
void printMenu();
void printLine(int x , int y ) ;
void printU( int x , int y ) ;
void printA( int x , int y ) ;
void printM ( int x , int y );
void printS ( int x , int y );
void calculateAggregate(string name,float  matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2, int ecatMarksStd2) ;


main()
{
	system("cls");
	printMenu();

	int choice ;
	
	cout << "Select your option : " ;
	cin >> choice ;
	if(choice == 1 ) 
	{
	 	string name ;
		float matricMarks , interMarks , ecatMarks ;

		cout << "Eter Your Name : " ;
		cin >> name ;
		
		cout << "Enter Matric Marks : " ;
		cin >> matricMarks ;
	
		cout << "Enter Inter Marks: " ;
		cin >> interMarks ;

		cout << "Enter Ecat Marks : " ;
		cin >> ecatMarks ;

		calculateAggregate(name, matricMarks, interMarks, ecatMarks);
	}

	if ( choice == 2 ) 
	{
		string nameStd1 ,nameStd2 ;
		int ecatMarksStd1 , ecatMarksStd2 ;
		
		cout << "Enter Name of Student 1 : " ;
		cin >> nameStd1 ;
		cout << "Enter Ecat Marks of " << nameStd1 << " : ";
		cin >> ecatMarksStd1;

		cout << "Enter Name of Student 2 : " ;
		cin >> nameStd2 ;
		cout << "Enter Ecat Marks of " << nameStd2 << " : ";
		cin >> ecatMarksStd2;
		compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);

	}
	
	


}

void gotoxy ( int x , int y )
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMenu()
{
	printLine(0, 7) ;
	printU( 23 , 10 );
	printA( 40 , 10 );
	printM( 50 , 10 );
	printS(68 ,10) ;
	printLine(0, 18) ;

	gotoxy( 0 , 20);

	  cout << "1. Calculate Aggregate" << endl ;
	  cout << "2. Compare Marks" << endl << endl ;
	
	
	

}

void printLine(int x , int y )
{
	gotoxy(x,y) ; cout << "-------------------------------------------------------------------------------------------------------------------------" ; 
}

void printU( int x , int y )
{
	gotoxy ( x , y ); cout << "##        ##" ; y= y + 1 ;	
	gotoxy ( x , y ); cout << "##        ##" ; y= y + 1 ;
	gotoxy ( x , y ); cout << "##        ##" ; y= y + 1 ; 
	gotoxy ( x , y ); cout << "##        ##" ; y= y + 1 ;
	gotoxy ( x , y ); cout << "##        ##" ; y= y + 1 ;
	gotoxy ( x , y ); cout << "##        ##" ; y= y + 1 ;
	gotoxy ( x , y ); cout << "############" ; y= y + 1 ;
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

void calculateAggregate(string name,float  matricMarks, float interMarks, float ecatMarks)
{
	float matricPercentage = (matricMarks /1100 ) * 100;
	float interPercentage = (interMarks /550 ) * 100;
	float ecatPercentage = (ecatMarks /400) * 100;
	float aggregate = ( matricPercentage  * 0.3) + ( interPercentage * 0.3 ) + ( ecatPercentage * 0.4) ;
	cout << "Aggregate of " <<name << " is " << aggregate << "%" <<endl ;
}

void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2, int ecatMarksStd2)
{
	if(ecatMarksStd1> ecatMarksStd2)
	{
		cout << nameStd1 << " has First Roll Number " << endl ;
	}

	if(ecatMarksStd2> ecatMarksStd1)
	{
		cout << nameStd2 << " has First Roll Number " << endl ;
	}
}