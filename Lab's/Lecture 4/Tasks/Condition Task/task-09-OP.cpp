#include<iostream>
using namespace std ;

void requireFuel ( float distance ) ;

main ()
{
	float distance ;
	
	cout << "Enter the distance : " ;
	cin >> distance ;

	requireFuel ( distance ) ;	
}


void requireFuel ( float distance ) 
{
	float fuel = distance * 10 ;
	
	if ( fuel > 100 ) 
	{
		cout << "Fuel needed : " << fuel << endl ;
	}
	if ( fuel <= 100 )
	{
		fuel = 100 ;
		cout << "Fuel needed : " << fuel << endl ;
	}
}

