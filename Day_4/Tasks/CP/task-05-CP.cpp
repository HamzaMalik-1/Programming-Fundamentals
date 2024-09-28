#include<iostream>

using namespace std ;

void possibleBonus ( int yourPosition , int friendPosition ) ;

main () 
{
	int yourPosition , friendPosition ;

	cout << "Enter your position : " ;
	cin >> yourPosition ;

	cout << "Enter your friend's position : " ;
	cin >> friendPosition ;

	possibleBonus ( yourPosition , friendPosition ) ;
}

void possibleBonus ( int yourPosition , int friendPosition )
{
	int difference = friendPosition - yourPosition , tilesCanMove = 6;

	if ( difference <= tilesCanMove )
	{
		cout << "true" << endl ;	
	}
	if ( difference > tilesCanMove )
	{
		cout << "false" << endl ;
	}
}