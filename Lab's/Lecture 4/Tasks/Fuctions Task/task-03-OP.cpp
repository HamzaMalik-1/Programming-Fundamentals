#include<iostream>
using namespace std ;

void howManyStickers ( int side ) ;

main () 
{
	int side ;
	
	cout << "Enter the side length of the Rubik's Cube : " ;
	cin >> side ;

	howManyStickers ( side );

}

void howManyStickers ( int side )
{
	
	int stickers = 6 * side * side ;

	cout << "Number of stickers needed : " << stickers ;
}
